#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    client = new QMqttClient;
    Set=new Setting;
    Lg=new Logs;


    timer = new QTimer(this);

    //正式用例
     client->setPort(1883);
     client->setUsername("clientAPP&xxxxxx");
     client->setPassword("xxxxxxxxxxxxxxxx");
     client->setClientId("xxxxxxxxxxxxxxxx.clientAPP|securemode=2,signmethod=hmacsha256,timestamp=xxxxxxxxxx|");
     client->setHostname("xxxxxxxxxxxxxxxx.iot-as-mqtt.cn-shanghai.aliyuncs.com");
     QString TopicName="/sys/xxxxxxxxxxxxx/clientAPP/thing/service/property/set";
     client->subscribe(TopicName);



     connect(Set->ui->SureButton,&QPushButton::clicked,[=](){
         client->connectToHost();
         ui->SettingButton->setStyleSheet("border-image: url(:/images/Red.png);");
         ui->LogButton->setStyleSheet("border-image: url(:/images/Blue.png);");
      });


     connect(client,&QMqttClient::connected,this,&Widget::connectSuccessSlot);



     connect(this,SIGNAL(SendData(QString)),Lg,SLOT(GetData(QString)));

     connect(Lg->ui->SaveButton,&QPushButton::clicked,this,&Widget::SaveButton_clicked);


     connect(timer,&QTimer::timeout,this,&Widget::DataProduce);

//     connect(timer,SIGNAL(timeout()),[=](){
//         qDebug()<<111;
//     });
     timer->start(250);


        //设置界面背景颜色
        QPalette pa(this->palette());
        QImage img = QImage(":/images/white1.jfif");
        img = img.scaled(this->size());
        QBrush *pic = new QBrush(img);
        pa.setBrush(QPalette::Window,*pic);
        this->setPalette(pa);



        //设置按钮背景颜色
        ui->SettingButton->setStyleSheet("border-image: url(:/images/Grey .png);");
        ui->LogButton->setStyleSheet("border-image: url(:/images/Grey .png);");
        ui->Node1Button->setStyleSheet("border-image: url(:/images/Grey .png);");
        ui->Node2Button->setStyleSheet("border-image: url(:/images/Grey .png);");
        ui->Node3Button->setStyleSheet("border-image: url(:/images/Grey .png);");
        ui->Node4Button->setStyleSheet("border-image: url(:/images/Grey .png);");


/**********设置模块*************************************************************************************************************************/
        //设置字体大小
        QFont ft;
        ft.setPointSize(18);
        ft.setFamily("黑体");



/**********节点一模块***********************************************************************************************************************/
        ui->TempLabel1->setAlignment(Qt::AlignCenter);
        ui->HumiLabel1->setAlignment(Qt::AlignCenter);
        ui->LightLabel1->setAlignment(Qt::AlignCenter);
        ui->SmokeLabel1->setAlignment(Qt::AlignCenter);
        ui->BatteryLabel1->setAlignment(Qt::AlignCenter);

        ui->TempEdit1->setAlignment(Qt::AlignCenter);
        ui->HumiEdit1->setAlignment(Qt::AlignCenter);
        ui->LightEdit1->setAlignment(Qt::AlignCenter);
        ui->SmokeEdit1->setAlignment(Qt::AlignCenter);
        ui->BatteryEdit1->setAlignment(Qt::AlignCenter);

        //改变Qlable字体颜色
        QPalette pe;
        pe.setColor(QPalette::WindowText,Qt::white);
        ui->TempLabel1->setPalette(pe);
        ui->HumiLabel1->setPalette(pe);
        ui->LightLabel1->setPalette(pe);
        ui->SmokeLabel1->setPalette(pe);
        ui->BatteryLabel1->setPalette(pe);

        //
        ui->TempEdit1->setPalette(pe);
        ui->HumiEdit1->setPalette(pe);
        ui->LightEdit1->setPalette(pe);
        ui->SmokeEdit1->setPalette(pe);
        ui->BatteryEdit1->setPalette(pe);

        //设置字体大小
        ft.setPointSize(16);
        ui->TempLabel1->setFont(ft);
        ui->HumiLabel1->setFont(ft);
        ui->LightLabel1->setFont(ft);
        ui->SmokeLabel1->setFont(ft);
        ui->BatteryLabel1->setFont(ft);

        ui->TempLabel1->setStyleSheet("background:transparent;");
        ui->HumiLabel1->setStyleSheet("background:transparent;");
        ui->LightLabel1->setStyleSheet("background:transparent;");
        ui->SmokeLabel1->setStyleSheet("background:transparent;");
        ui->BatteryLabel1->setStyleSheet("background:transparent;");

        ui->TempEdit1->setAlignment(Qt::AlignCenter);


/*************节点二模块***********************************************************************************************************************/
        ui->TempLabel2->setAlignment(Qt::AlignCenter);
        ui->HumiLabel2->setAlignment(Qt::AlignCenter);
        ui->LightLabel2->setAlignment(Qt::AlignCenter);
        ui->SmokeLabel2->setAlignment(Qt::AlignCenter);
        ui->BatteryLabel2->setAlignment(Qt::AlignCenter);

        ui->TempEdit2->setAlignment(Qt::AlignCenter);
        ui->HumiEdit2->setAlignment(Qt::AlignCenter);
        ui->LightEdit2->setAlignment(Qt::AlignCenter);
        ui->SmokeEdit2->setAlignment(Qt::AlignCenter);
        ui->BatteryEdit2->setAlignment(Qt::AlignCenter);

        //改变Qlable字体颜色
        pe.setColor(QPalette::WindowText,Qt::white);
        ui->TempLabel2->setPalette(pe);
        ui->HumiLabel2->setPalette(pe);
        ui->LightLabel2->setPalette(pe);
        ui->SmokeLabel2->setPalette(pe);
        ui->BatteryLabel2->setPalette(pe);

        //设置字体大小
        ft.setPointSize(16);
        ui->TempLabel2->setFont(ft);
        ui->HumiLabel2->setFont(ft);
        ui->LightLabel2->setFont(ft);
        ui->SmokeLabel2->setFont(ft);
        ui->BatteryLabel2->setFont(ft);

        ui->TempEdit2->setPalette(pe);
        ui->HumiEdit2->setPalette(pe);
        ui->LightEdit2->setPalette(pe);
        ui->SmokeEdit2->setPalette(pe);
        ui->BatteryEdit2->setPalette(pe);

        ui->TempLabel2->setStyleSheet("background:transparent;");
        ui->HumiLabel2->setStyleSheet("background:transparent;");
        ui->LightLabel2->setStyleSheet("background:transparent;");
        ui->SmokeLabel2->setStyleSheet("background:transparent;");
        ui->BatteryLabel2->setStyleSheet("background:transparent;");

/*************节点三模块***********************************************************************************************************************/
        ui->TempLabel3->setAlignment(Qt::AlignCenter);
        ui->HumiLabel3->setAlignment(Qt::AlignCenter);
        ui->LightLabel3->setAlignment(Qt::AlignCenter);
        ui->SmokeLabel3->setAlignment(Qt::AlignCenter);
        ui->BatteryLabel3->setAlignment(Qt::AlignCenter);

        ui->TempEdit3->setAlignment(Qt::AlignCenter);
        ui->HumiEdit3->setAlignment(Qt::AlignCenter);
        ui->LightEdit3->setAlignment(Qt::AlignCenter);
        ui->SmokeEdit3->setAlignment(Qt::AlignCenter);
        ui->BatteryEdit3->setAlignment(Qt::AlignCenter);

        //改变Qlable字体颜色
        pe.setColor(QPalette::WindowText,Qt::white);
        ui->TempLabel3->setPalette(pe);
        ui->HumiLabel3->setPalette(pe);
        ui->LightLabel3->setPalette(pe);
        ui->SmokeLabel3->setPalette(pe);
        ui->BatteryLabel3->setPalette(pe);

        //设置字体大小
        ft.setPointSize(16);
        ui->TempLabel3->setFont(ft);
        ui->HumiLabel3->setFont(ft);
        ui->LightLabel3->setFont(ft);
        ui->SmokeLabel3->setFont(ft);
        ui->BatteryLabel3->setFont(ft);

        //
        ui->TempEdit3->setPalette(pe);
        ui->HumiEdit3->setPalette(pe);
        ui->LightEdit3->setPalette(pe);
        ui->SmokeEdit3->setPalette(pe);
        ui->BatteryEdit3->setPalette(pe);

        ui->TempLabel3->setStyleSheet("background:transparent;");
        ui->HumiLabel3->setStyleSheet("background:transparent;");
        ui->LightLabel3->setStyleSheet("background:transparent;");
        ui->SmokeLabel3->setStyleSheet("background:transparent;");
        ui->BatteryLabel3->setStyleSheet("background:transparent;");

 /************节点四模块***********************************************************************************************************************/
        ui->TempLabel4->setAlignment(Qt::AlignCenter);
        ui->HumiLabel4->setAlignment(Qt::AlignCenter);
        ui->LightLabel4->setAlignment(Qt::AlignCenter);
        ui->SmokeLabel4->setAlignment(Qt::AlignCenter);
        ui->BatteryLabel4->setAlignment(Qt::AlignCenter);

        ui->TempEdit4->setAlignment(Qt::AlignCenter);
        ui->HumiEdit4->setAlignment(Qt::AlignCenter);
        ui->LightEdit4->setAlignment(Qt::AlignCenter);
        ui->SmokeEdit4->setAlignment(Qt::AlignCenter);
        ui->BatteryEdit4->setAlignment(Qt::AlignCenter);

        //改变Qlable字体颜色
        pe.setColor(QPalette::WindowText,Qt::white);
        ui->TempLabel4->setPalette(pe);
        ui->HumiLabel4->setPalette(pe);
        ui->LightLabel4->setPalette(pe);
        ui->SmokeLabel4->setPalette(pe);
        ui->BatteryLabel4->setPalette(pe);

        //设置字体大小
        ft.setPointSize(16);
        ui->TempLabel4->setFont(ft);
        ui->HumiLabel4->setFont(ft);
        ui->LightLabel4->setFont(ft);
        ui->SmokeLabel4->setFont(ft);
        ui->BatteryLabel4->setFont(ft);

        //
        ui->TempEdit4->setPalette(pe);
        ui->HumiEdit4->setPalette(pe);
        ui->LightEdit4->setPalette(pe);
        ui->SmokeEdit4->setPalette(pe);
        ui->BatteryEdit4->setPalette(pe);

        ui->TempLabel4->setStyleSheet("background:transparent;");
        ui->HumiLabel4->setStyleSheet("background:transparent;");
        ui->LightLabel4->setStyleSheet("background:transparent;");
        ui->SmokeLabel4->setStyleSheet("background:transparent;");
        ui->BatteryLabel4->setStyleSheet("background:transparent;");

/******************************************************************************************************************************************/



}
Widget::~Widget()
{
    delete ui;
}


void Widget::connectSuccessSlot()
{
    QMessageBox::information(this,"连接提示","连接成功");

    connect(client,&QMqttClient::messageReceived,this,&Widget::receMessageSlot);
}




void Widget::receMessageSlot(const QByteArray &ba,const QMqttTopicName &topic)
{
       Widget::str=topic.name() + QString(ba);
       queue.enqueue(str);
       emit Widget::SendData(str);
       Widget::AllString+=Widget::str;
}




void Widget::DataProduce()
{
    if(queue.isEmpty()==true)
    {
        count1++;
        count2++;
        count3++;
        count4++;
        qDebug()<<count1<<count2<<count3<<count4;
    }
    else {
        qDebug()<<1;
        QString stri = queue.front();
        queue.pop_front();
        int num;
        QByteArray message=stri.toLatin1();
        num=message.indexOf("{",1);
        message=message.mid(num);
        QJsonDocument doc = QJsonDocument::fromJson(message);

        double Temperature1=0,Temperature2=0,Temperature3=0,Temperature4=0;
        int Battery_P1=0,Battery_P2=0,Battery_P3=0,Battery_P4=0;
        double Light_I1=0,Light_I2=0,Light_I3=0,Light_I4=0;
        double Smoke_C1=0,Smoke_C2=0,Smoke_C3=0,Smoke_C4=0;
        double Humidity1=0,Humidity2=0,Humidity3=0,Humidity4=0;

        QJsonValue names=doc["deviceName"];

        if(names=="node1")
        {
            try {
                QJsonValue params=doc["items"];
                 Temperature1=params["Temperature1"]["value"].toDouble();
                //
                 Battery_P1=params["BatteryPercentage1"]["value"].toInt();
                //
                 Light_I1=params["LightLux1"]["value"].toDouble();
                //
                  Smoke_C1=params["Smoke1"]["value"].toDouble();
                //
                 Humidity1=params["Humidity1"]["value"].toDouble();
                //
                 State1=params["RunningState1"]["value"].toInt();


            } catch (errno_t) {

                qDebug()<<"ji";
            }
            if(State1==0)
            {
                //ui->Node1Button->setStyleSheet("border-image: url(:/images/Grey .png);");
               // count1++;
            }
            else
            {
               ui->Node1Button->setStyleSheet("border-image: url(:/images/purple.png);");
               count1 = 0;
            }

            QString Temp1=QString::number(Temperature1,'f', 1);
            QString Light1=QString::number(Light_I1,'f', 1);
            QString Smoke1=QString::number(Smoke_C1,'f', 1);
            QString Humi1=QString::number(Humidity1,'f', 1);
            QString Battery1=QString::number(Battery_P1);
            QString RunState1=QString::number(State1);

            ui->TempEdit1->setText(Temp1);
            ui->BatteryEdit1->setText(Battery1);
            ui->LightEdit1->setText(Light1);
            ui->SmokeEdit1->setText(Smoke1);
            ui->HumiEdit1->setText(Humi1);

        }


        if(names=="node2"){
            try {
                QJsonValue params=doc["items"];
                 Temperature2=params["Temperature2"]["value"].toDouble();
                //
                 Battery_P2=params["BatteryPercentage2"]["value"].toInt();
                //
                 Light_I2=params["LightLux2"]["value"].toDouble();
                //
                  Smoke_C2=params["Smoke2"]["value"].toDouble();
                //
                 Humidity2=params["Humidity2"]["value"].toDouble();
                //
                 State2=params["RunningState2"]["value"].toInt();
            } catch (errno_t) {

            }

            QString Temp2=QString::number(Temperature2,'f', 1);
            QString Light2=QString::number(Light_I2,'f', 1);
            QString Smoke2=QString::number(Smoke_C2,'f', 1);
            QString Humi2=QString::number(Humidity2,'f', 1);
            QString Battery2=QString::number(Battery_P2);
            QString RunState2=QString::number(State2);

            ui->TempEdit2->setText(Temp2);
            ui->BatteryEdit2->setText(Battery2);
            ui->LightEdit2->setText(Light2);
            ui->SmokeEdit2->setText(Smoke2);
            ui->HumiEdit2->setText(Humi2);
            if(State2==0)
            {
                //ui->Node2Button->setStyleSheet("border-image: url(:/images/Grey .png);");
                //count2++;
            }
            else
            {
               ui->Node2Button->setStyleSheet("border-image: url(:/images/Green.png);");
               count2 = 0;
            }
        }
        if(names=="node3")
        {
            try {
                QJsonValue params=doc["items"];
                 Temperature3=params["Temperature3"]["value"].toDouble();
                //
                 Battery_P3=params["BatteryPercentage3"]["value"].toInt();
                //
                 Light_I3=params["LightLux3"]["value"].toDouble();
                //
                  Smoke_C3=params["Smoke3"]["value"].toDouble();
                //
                 Humidity3=params["Humidity3"]["value"].toDouble();
                //
                 State3=params["RunningState3"]["value"].toInt();
            } catch (errno_t) {

            }
            QString Temp3=QString::number(Temperature3,'f', 1);
            QString Smoke3=QString::number(Smoke_C3,'f', 1);
            QString Light3=QString::number(Light_I3,'f', 1);
            QString Humi3=QString::number(Humidity3,'f', 1);
            QString Battery3=QString::number(Battery_P3);
            QString RunState3=QString::number(State3);

            ui->TempEdit3->setText(Temp3);
            ui->BatteryEdit3->setText(Battery3);
            ui->LightEdit3->setText(Light3);
            ui->HumiEdit3->setText(Humi3);
            ui->SmokeEdit3->setText(Smoke3);

            if(State3==0)
            {
                //ui->Node3Button->setStyleSheet("border-image: url(:/images/Grey .png);");
                //count3++;
            }
            else
            {
               ui->Node3Button->setStyleSheet("border-image: url(:/images/yellow.png);");
               count3 = 0;
            }
        }

       if(names=="node4")
       {
        try {
            QJsonValue params=doc["items"];
             Temperature4=params["Temperature4"]["value"].toDouble();
            //
             Battery_P4=params["BatteryPercentage4"]["value"].toInt();
            //
             Light_I4=params["LightLux4"]["value"].toDouble();
            //
             Smoke_C4=params["Smoke4"]["value"].toDouble();
            //
             Humidity4=params["Humidity4"]["value"].toDouble();
            //
             State4=params["RunningState4"]["value"].toInt();
        } catch (errno_t) {

        }
           QString Temp4=QString::number(Temperature4,'f', 1);
           QString Light4=QString::number(Light_I4,'f', 1);
           QString Smoke4=QString::number(Smoke_C4,'f', 1);
           QString Humi4=QString::number(Humidity4,'f', 1);
           QString Battery4=QString::number(Battery_P4);
           QString RunState4=QString::number(State4);

           ui->TempEdit4->setText(Temp4);
           ui->BatteryEdit4->setText(Battery4);
           ui->LightEdit4->setText(Light4);
           ui->SmokeEdit4->setText(Smoke4);
           ui->HumiEdit4->setText(Humi4);
        if(State4==0)
        {
            //ui->Node4Button->setStyleSheet("border-image: url(:/images/Grey .png);");
            //count4++;
        }
        else
        {
           ui->Node4Button->setStyleSheet("border-image: url(:/images/Orange.png);");
           count4 = 0;
        }
}



        if(Temperature1>=35&&State1==1)
        {
            QString loacation="工作区域1";
            CallPolice(loacation);
            qDebug()<<1;
        }


        if(State2==1&&Temperature2>35)
        {
            QString loacation="工作区域2";
            CallPolice(loacation);
        }

        if(State3==1&&Temperature3>35)
        {
            QString loacation="储存空间";
            CallPolice(loacation);
        }

        if(State4==1&&Temperature4>35)
        {
            QString loacation="开放空间";
            CallPolice(loacation);
        }     

    }


    if(count1>25)
    {
        ui->Node1Button->setStyleSheet("border-image: url(:/images/Grey .png);");
        count1 =0;
    }
    if(count2>25)
    {
        ui->Node2Button->setStyleSheet("border-image: url(:/images/Grey .png);");
        count2 =0;
    }
    if(count3>25)
    {
        ui->Node3Button->setStyleSheet("border-image: url(:/images/Grey .png);");
        count3 =0;
    }
    if(count4>25)
    {
        ui->Node4Button->setStyleSheet("border-image: url(:/images/Grey .png);");
        count4 =0;
    }
}


void Widget::ClientConnect()
{
    client->connectToHost();
    ui->SettingButton->setStyleSheet("border-image: url(:/images/Red.png);");
    ui->LogButton->setStyleSheet("border-image: url(:/images/Blue.png);");

}

void Widget::on_SettingButton_clicked()
{
    Set->show();
}

void Widget::on_Node1Button_clicked()
{
    this->N1=new Node1;
    N1->shownode1();
    QTest::qSleep(500);
    N1->show();
}
void Widget::on_Node2Button_clicked()
{
    this->N1=new Node1;
    N1->shownode2();
    QTest::qSleep(500);
    N1->show();
}
void Widget::on_Node3Button_clicked()
{
    this->N1=new Node1;
    N1->shownode1();
    QTest::qSleep(500);
    N1->show();
}
void Widget::on_Node4Button_clicked()
{
    this->N1=new Node1;
    N1->shownode1();
    QTest::qSleep(500);
    N1->show();
}

void Widget::SaveButton_clicked()
{
    QString textFile = QFileDialog::getSaveFileName(this,tr("Save txt"),
                                                               "",tr("text (*.txt)")); //选择路径
        //将文本框数据取出并按行排列
       QFile file(textFile);//文件命名
       if (!file.open(QFile::WriteOnly | QFile::Text))     //检测文件是否打开
       {
           QMessageBox::information(this, "Error Message", "Please Select a Text File!");
           return;
       }
       QTextStream out(&file);                 //分行写入文件
       out<<Widget::AllString ;
}



void Widget::CallPolice(QString &location)
{
    QString recvaddr0="978466623@qq.com";
        QRegExp re("^[A-Za-z0-9]+([_\\.][A-Za-z0-9]+)*@([A-Za-z0-9\\-]+\\.)+[A-Za-z]{2,6}$");
        if(re.exactMatch(recvaddr0)){//验证邮箱格式
            QTime time= QTime::currentTime();
            qsrand(time.msec()+time.second()*1000);
            Smtp smtp("18986084850@163.com","JFBCKQTFRAIJHEQB");//按照刚才的方法实例化一个smtp对象
            QByteArray recvaddr=recvaddr0.toUtf8();//QString转QByteArray
            QString subject="温度超出预定值";
            QString content="温度超出预定值，请立刻处理"+location+"处的温度异常";
            smtp.send(recvaddr,subject,content);
        }
        else{
            QMessageBox::warning(NULL,"提示","邮箱格式不正确,请重新输入。");
        }

}

void Widget::on_LogButton_clicked()
{
    Widget::Lg->show();
}




