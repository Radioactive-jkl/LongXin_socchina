#include "node1.h"
#include "ui_node1.h"

Node1::Node1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Node1)
{
    ui->setupUi(this);
    this->resize(400,600);
    this->setFixedSize(400,600);
    this->setAutoFillBackground(true);
    QPalette pa1(this->palette());
    QImage img = QImage(":/images/white1.jfif");
    img = img.scaled(this->size());
    QBrush *pic = new QBrush(img);
    pa1.setBrush(QPalette::Window,*pic);
    //this->setAutoFillBackground(true);
    this->setPalette(pa1);

    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerEvent()));
    timer->start(1000);

}

void Node1::timerEvent()
{
    QDateTime time=QDateTime::currentDateTime();
    QString str = time.toString("yyyy_MM_dd hh:mm:ss");
    ui->TimeEdit->setText(str);

}


void Node1::shownode1()
{
    ui->TemHumiEdit->setText("DHT11");
    ui->LightEdit->setText("GY-30");
    ui->SmokeEdit->setText("MQ-2");
    ui->LocationEdit->setText("工作空间一");

}

void Node1::shownode2()
{
    ui->TemHumiEdit->setText("DHT11");
    ui->LightEdit->setText("GY-30");
    ui->SmokeEdit->setText("MQ-2");
    ui->LocationEdit->setText("工作空间二");
}

void Node1::shownode3()
{
    ui->TemHumiEdit->setText("DHT11");
    ui->LightEdit->setText("GY-30");
    ui->SmokeEdit->setText("MQ-2");
    ui->LocationEdit->setText("储存空间");
}

void Node1::shownode4()
{
    ui->TemHumiEdit->setText("DHT11");
    ui->LightEdit->setText("GY-30");
    ui->SmokeEdit->setText("MQ-2");
    ui->LocationEdit->setText("开放空间");
}


Node1::~Node1()
{
    delete ui;
}
