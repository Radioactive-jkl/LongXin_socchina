#include "setting.h"
#include "ui_setting.h"

Setting::Setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Setting)
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

    QFont ft;
    ft.setPointSize(14);
    ft.setFamily("黑体");

    ui->HostEdit->setText("iiycw36TvBd.iot-as-mqtt.cn-shanghai.aliyuncs.com");
    ui->ClientEdit->setText("jk3pz9zX1pF.clientAPP|securemode=2,signmethod=hmacsha256,timestamp=1688816224104|");
    ui->UserEdit->setText("clientAPP&jk3pz9zX1pF");
    ui->PassEdit->setText("a5987bc089316bead4e1d0e071eed0166d995e487974047403c70b2af35f1bc8");
    ui->PortEdit->setText("1883");
    ui->TopicEdit->setText("/sys/jk3pz9zX1pF/clientAPP/thing/service/property/set");
}

Setting::~Setting()
{
    delete ui;
}




