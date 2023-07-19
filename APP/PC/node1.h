#ifndef NODE1_H
#define NODE1_H

#include <QWidget>
#include <QByteArray>
#include <QtMqtt/qmqttclient.h>
#include <QString>
#include <QDebug>
#include <QTimer>
#include <QIcon>
#include <QFont>
#include <QDateTime>
namespace Ui {
class Node1;
}

class Node1 : public QWidget
{
    Q_OBJECT

public:
    explicit Node1(QWidget *parent = nullptr);
    ~Node1();
public slots:
    void timerEvent();
    void shownode1();
    void shownode2();
    void shownode3();
    void shownode4();
private:
    Ui::Node1 *ui;
    int dataTimeId;



};

#endif // NODE1_H
