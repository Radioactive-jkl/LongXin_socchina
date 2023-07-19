#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtMqtt/qmqttclient.h>
#include <QDateTime>
#include <QFile>
#include <QTableWidget>
#include "QJsonObject"
#include "QJsonDocument"
#include <QByteArray>
#include <QJsonValue>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <qbitmap.h>
#include <qpainter.h>
#include <QIcon>
#include <QFont>
#include <QTest>
#include <QTextStream>
#include <QFileDialog>
#include <QQueue>
#include <QTimer>
#include "node1.h"//节点详情界面对应类的头文件
#include "setting.h"//设置详情页
#include "ui_setting.h"
#include "smtp.h"
#include "logs.h"
#include "ui_logs.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT


public:
    explicit Widget(QWidget *parent = nullptr);

    QTableWidget *table=new QTableWidget();
    QString AllString;
    QString str;
    Node1 *N1;//用来保存页面二的实例化对象的地址
    Setting *Set;//用于存放设置界面的实例化地址
    Logs *Lg;
    QTimer *timer;
    QQueue<QString> queue;
    QPushButton *Node1Button;
    QPushButton *Node2Button;
    QPushButton *Node3Button;
    QPushButton *Node4Button;
    int count1=0,count2=0,count3=0,count4=0;
    bool State1=0,State2=0,State3=0,State4=0;
    void CallPolice(QString &location);
    int CheckLocation();


    ~Widget();
private slots:

    void connectSuccessSlot();

    void receMessageSlot(const QByteArray &ba,const QMqttTopicName &topic);


    void on_SettingButton_clicked();

    void on_Node1Button_clicked();

    void on_Node2Button_clicked();

    void on_Node3Button_clicked();

    void on_Node4Button_clicked();

    void SaveButton_clicked();

    void on_LogButton_clicked();

    void ClientConnect();

public slots:

    void DataProduce();

public: signals:

    void change_background(bool isOpen);

    void SendData(QString);


private:
    Ui::Widget *ui;
    QMqttClient *client;

};

#endif // WIDGET_H
