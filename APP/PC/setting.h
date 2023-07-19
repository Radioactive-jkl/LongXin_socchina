#ifndef SETTING_H
#define SETTING_H

#include <QWidget>
#include <QPushButton>
namespace Ui {
class Setting;
}

class Setting : public QWidget
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = nullptr);
    ~Setting();
    QPushButton *SureButton;
    Ui::Setting *ui;

public: signals:

private slots:




private:

};

#endif // SETTING_H
