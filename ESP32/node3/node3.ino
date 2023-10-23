/***********************************
 *     节点3代码                    *
 *     日期： 2023年7月18日          *
 ***********************************/
#include <WiFi.h>
#include <Wire.h>
#include "PubSubClient.h"
#include <ArduinoJson.h>
#include "aliyun_mqtt.h"//连接阿里云服务器
#include <Arduino.h>
#include "Ticker.h"
#include "DHT.h"   //温湿度传感器头文件
#include <BH1750.h> //光强传感器头文件
#include <U8g2lib.h>//oled屏幕头文件
 
/* 连接阿里云服务器信息          */ 
//以下信息需要自己修改
#define WIFI_SSID        "xxxxxxxxxxx" //替换自己的WIFI
#define WIFI_PASSWD      "xxxxxxxxxxx" //替换自己的WIFI
#define PRODUCT_KEY      "xxxxxxxxxxx" //替换自己的PRODUCT_KEY
#define DEVICE_NAME      "node3"       //替换自己的DEVICE_NAME
#define DEVICE_SECRET    "xxxxxxxxxxx" //替换自己的DEVICE_SECRET
 //以下不需修改
#define DEV_VERSION       "S-TH-WIFI-v1.0-20190220"        //固件版本信息
#define ALINK_BODY_FORMAT         "{\"id\":123,\"params\":%s,%s}"
#define ALINK_TOPIC_PROP_POST     "/sys/" PRODUCT_KEY "/" DEVICE_NAME "/thing/event/property/post"
#define ALINK_TOPIC_PROP_POSTRSP  "/sys/" PRODUCT_KEY "/" DEVICE_NAME "/thing/event/property/post_reply"
#define ALINK_TOPIC_PROP_SET      "/sys/" PRODUCT_KEY "/" DEVICE_NAME "/thing/service/property/set"
#define ALINK_METHOD_PROP_POST    "\"thing.event.property.post\""
#define ALINK_TOPIC_DEV_INFO      "/ota/device/inform/" PRODUCT_KEY "/" DEVICE_NAME ""    
#define ALINK_VERSION_FROMA      "\"version\":\"1.0\",\"method\":"ALINK_METHOD_PROP_POST
 
WiFiClient   espClient;
PubSubClient mqttClient(espClient);
#define sda 5
#define scl 23
U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, scl, sda, U8X8_PIN_NONE); //oled屏幕头文件
#define sda_gy30   21
#define scl_gy30   22
BH1750 lightMeter;                   //光强传感器输入引脚
#define ANALOG_PIN 34               //电量输入引脚
#define D0 33
#define A0 32                        //烟雾传感器输入引脚
#define DHTPIN 18     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE); 
uint32_t adc_val = 0;
double voltage = 0;
int  percentage = 100;
double capacity[101]={
          4.179,4.169,4.157,4.146,4.134,4.123,4.111,4.099,4.088,4.076,
          4.063,4.051,4.04,4.028,4.017,4.005,3.994,3.982,3.971,3.960 ,
          3.949,3.938,3.927,3.916,3.906,3.895,3.885,3.875,3.865,3.855,
          3.845,3.836,3.827,3.818,3.809,3.800 ,3.792,3.784,3.775,3.768,
          3.760 ,3.753,3.745,3.738,3.732,3.725,3.719,3.713,3.707,3.701,
          3.695,3.690 ,3.685,3.679,3.675,3.670 ,3.665,3.661,3.657,3.652,
          3.648,3.645,3.641,3.637,3.633,3.630 ,3.626,3.623,3.619,3.616,
          3.613,3.609,3.606,3.602,3.599,3.595,3.592,3.588,3.584,3.580 ,
          3.576,3.571,3.567,3.562,3.557,3.552,3.546,3.540 ,3.534,3.528,
          3.521,3.513,3.506,3.498,3.489,3.48,3.37,3.26,3.149,3.138,
          3.126};  //电量检测数据
Ticker tim1;                    //定时器,用来循环上传数据

/*获得电量*/
float Get_ADCValue_Power(void)
{
  float val=0;
  int times=10;
  int count;
  for(count=0;count<times;count++)
  {
    val+=analogRead(ANALOG_PIN);//获取DMA通道值
    delay(5);
  }
  return val/times;
}
int getPower()
{
  adc_val = Get_ADCValue_Power();
  voltage = (((double)adc_val)/4095)*3.3/5.6*16.6;
  if(voltage<=capacity[100-percentage])
    percentage--;
}

/*获得烟雾浓度*/
float Get_ADCValue_MQ2(void)
{
  float val=0;
  int times=10;
  int count;
  for(count=0;count<times;count++)
  {
    val+=analogRead(A0);//获取DMA通道值
    delay(5);
  }
  return val/times;
}
float MQ2_GetPPM(void)
{
  float Vrl=3.3f*Get_ADCValue_MQ2()/4096.f;
  Vrl=((float)((int)((Vrl+0.005)*100)))/100;
  float RS=(3.3-Vrl)/Vrl*5.00;
  delay(300);
  double r=RS/6;
  float ppm=613.9*pow(r,-2.074);
  return ppm;
}

/*连接WIFI*/
void setupWifi()
{
  delay(10);
  Serial.println("connect WIFI");
  WiFi.begin(WIFI_SSID, WIFI_PASSWD);
  while (!WiFi.isConnected())
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println("OK");
  Serial.println("Wifi connected!");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

/*向主题发送数据*/
void sendData()
{
  if (mqttClient.connected())
  {
    //先拼接出json字符串
    char param[282];
    char jsonBuf[478];
    sprintf(param, "{\"RunningState1\":1,\"Humidity1\":%.1f,\"Temperature1\":%.1f,\"LightLux1\":%.2f,\"Smoke1\":%.2f,\"BatteryPercentage1\":%d}", dht.readHumidity(), dht.readTemperature(),lightMeter.readLightLevel(),MQ2_GetPPM(),getPower()); //我们把要上传的数据写在param里
    sprintf(jsonBuf, ALINK_BODY_FORMAT,param,ALINK_VERSION_FROMA);
    //再从mqtt客户端中发布post消息
    if (mqttClient.publish(ALINK_TOPIC_PROP_POST, jsonBuf))
    {
      Serial.print("Post message to cloud: ");
      Serial.println(jsonBuf);
    }
    else
    {
      Serial.println("Publish message to cloud failed!");
    }
  }
}
void mqtt_callback(char *topic, byte *payload, unsigned int length)
{
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  payload[length] = '\0';
  Serial.println((char *)payload);
  if (strstr(topic, ALINK_TOPIC_PROP_SET))
  {
    StaticJsonBuffer<100> jsonBuffer;
    JsonObject &root = jsonBuffer.parseObject(payload);
    if (!root.success())
    {
      Serial.println("parseObject() failed");
      return;
    }
  }
}
/*发送版本信息*/
void mqtt_version_post()
{
  char param[512];
  char jsonBuf[1024];
  sprintf(param, "{\"id\": 123,\"params\": {\"version\": \"%s\"}}", DEV_VERSION);
  Serial.println(param);
  mqttClient.publish(ALINK_TOPIC_DEV_INFO, param);
}

/*检测是否连接上阿里云服务器*/
void mqtt_check_connect()
{
  while (!mqttClient.connected())
  {
    Serial.println("MQTT  connect ....");
    while (connect_aliyun_mqtt(mqttClient, PRODUCT_KEY, DEVICE_NAME, DEVICE_SECRET))
    {
      Serial.println("MQTT connect succeed!");
      mqttClient.subscribe(ALINK_TOPIC_PROP_SET);
      Serial.println("subscribe done");
      mqtt_version_post();
    }
  }
}
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); //初始化串口
  u8g2.begin();
  dht.begin();
  WiFi.begin(WIFI_SSID, WIFI_PASSWD);
  mqttClient.setCallback(mqtt_callback);
  delay(2000);
  Serial.println("setServer Init!"); 
  connect_aliyun_mqtt(mqttClient, PRODUCT_KEY, DEVICE_NAME, DEVICE_SECRET);
  delay(2000);
  Serial.println("connect Init!"); 
  if (mqttClient.connected())
  {
    Serial.println("MQTT is connected!"); //判断以下是不是连好了.
  }
  tim1.attach(1, sendData); //定时每秒调用一次发送数据函数sendTempAndHumi
  Wire.begin(sda_gy30,scl_gy30);
  lightMeter.begin(BH1750::ONE_TIME_HIGH_RES_MODE);//初始化光强传感器
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);  //1000毫秒 1秒
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  if (isnan(h) || isnan(t) || isnan(f)) 
  {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  while (!lightMeter.measurementReady(true)) 
  {
    yield();
  }                       //光强传感器工作情况  
  lightMeter.configure(BH1750::ONE_TIME_HIGH_RES_MODE);
  if (!WiFi.isConnected()) //先看WIFI是否还在连接
  {
    setupWifi();
  } 
  if(!mqttClient.connected())//
  {
    mqtt_check_connect();
  }
  u8g2.clearBuffer();         // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr); // choose a suitable font
  u8g2.setCursor(0,10);
  u8g2.print("Humidity: "+String(h)+"%");  // write something to the internal memory
  u8g2.setCursor(0,20);
  u8g2.print("Temperature: "+String(t)+"°C");  // write something to the internal memory
  u8g2.setCursor(0,30);
  u8g2.print("light: "+String(lightMeter.readLightLevel())+"lx");  // write something to the internal memory
  u8g2.setCursor(0,40);
  u8g2.print("power: "+String(getPower())+"%");  // write something to the internal memory
  u8g2.setCursor(0,50);
  u8g2.print("nongdu: "+String(MQ2_GetPPM()));  // write something to the internal memory
  u8g2.sendBuffer();          // transfer internal memory to the display
  mqttClient.loop(); //客户端循环检测
}
 

 

 
