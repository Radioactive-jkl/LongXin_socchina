# IoT Warehouse Monitoring System
Radioactive *`V1.0`*
```
Time  :2023/7/19
```
<h3 align="center">LongXin socchina</h3>

---

#### Contents

* [Background](#background)
* [Highlights](#highlights)


## Background

* 放养摆烂比赛[*`全国大学生嵌入式芯片与系统设计竞赛/芯片应用赛道/龙芯赛道`*](http://www.socchina.net/)


##### Files
```
APP
  ├── Android
  |    └── 和下面PC是同一套代码
  └── PC
       ├── images
      ... (Qt codes)

ESP32
  ├── node1
 ... (代码几乎相同)
  ├── node4
  |    └── node4.ino
  ├── PubSubClient.zip
  ├── aliyun_mqtt.zip
  └── README_Load_lib.md

LongXinPI
  ├── paho
  |    └── mqtt库
  ├── sysfs_pin.py
  ├── i2c.py
  ├── graph.py
  ├── app.py
  ├── main.py
  └── requirements.txt
```


## Highlights

### APP
```
远程监控程序：包含桌面端的可执行程序和移动端应用程序的Qt/C++源码。
构建环境：Qt5.12
```

### ESP32
```
节点程序：包含每个节点的Arduino代码。
库环境配置：详见ESP32/README_Load_lib.md
```

### LongXinPi
```
终端程序：包含龙芯派2k1000LA上运行的Python程序。
Python环境：详见LongXinPi/requirements.txt
```
