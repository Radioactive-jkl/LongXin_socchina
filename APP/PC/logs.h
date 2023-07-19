#ifndef LOGS_H
#define LOGS_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class Logs;
}

class Logs : public QWidget
{
    Q_OBJECT

public:
    explicit Logs(QWidget *parent = nullptr);
    Ui::Logs *ui;
    ~Logs();
    QPushButton *SaveButton;
public slots:
    void GetData(QString Lg);
private slots:


private:

};

#endif // LOGS_H
