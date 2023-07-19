#include "logs.h"
#include "ui_logs.h"

Logs::Logs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Logs)
{
    ui->setupUi(this);
    QPalette pa1(this->palette());
    QImage img = QImage(":/images/white1.jfif");
    img = img.scaled(this->size());
    QBrush *pic = new QBrush(img);
    pa1.setBrush(QPalette::Window,*pic);
    this->setPalette(pa1);

    QFont ft;
    ft.setPointSize(10);
    ft.setFamily("黑体");
    ui->TopicNameLabel->setFont(ft);
    ui->TopicLabel->setFont(ft);
    ui->SaveButton->setFont(ft);
}

Logs::~Logs()
{
    delete ui;
}

void Logs::GetData(QString Lg)
{
    ui->LogsEdit->setText(Lg);
}

