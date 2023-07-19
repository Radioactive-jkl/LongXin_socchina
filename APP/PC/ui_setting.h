/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Portlabel;
    QLineEdit *PortEdit;
    QLabel *Passlabel;
    QLineEdit *PassEdit;
    QLabel *Userlabel;
    QLineEdit *UserEdit;
    QLabel *Clientlabel;
    QLineEdit *ClientEdit;
    QLabel *Hostlabel;
    QLineEdit *HostEdit;
    QLabel *Topiclabel;
    QLineEdit *TopicEdit;
    QPushButton *SureButton;

    void setupUi(QWidget *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->resize(400, 601);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Long.webp"), QSize(), QIcon::Normal, QIcon::Off);
        Setting->setWindowIcon(icon);
        verticalLayoutWidget = new QWidget(Setting);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 40, 311, 441));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Portlabel = new QLabel(verticalLayoutWidget);
        Portlabel->setObjectName(QString::fromUtf8("Portlabel"));

        verticalLayout->addWidget(Portlabel);

        PortEdit = new QLineEdit(verticalLayoutWidget);
        PortEdit->setObjectName(QString::fromUtf8("PortEdit"));

        verticalLayout->addWidget(PortEdit);

        Passlabel = new QLabel(verticalLayoutWidget);
        Passlabel->setObjectName(QString::fromUtf8("Passlabel"));

        verticalLayout->addWidget(Passlabel);

        PassEdit = new QLineEdit(verticalLayoutWidget);
        PassEdit->setObjectName(QString::fromUtf8("PassEdit"));

        verticalLayout->addWidget(PassEdit);

        Userlabel = new QLabel(verticalLayoutWidget);
        Userlabel->setObjectName(QString::fromUtf8("Userlabel"));

        verticalLayout->addWidget(Userlabel);

        UserEdit = new QLineEdit(verticalLayoutWidget);
        UserEdit->setObjectName(QString::fromUtf8("UserEdit"));

        verticalLayout->addWidget(UserEdit);

        Clientlabel = new QLabel(verticalLayoutWidget);
        Clientlabel->setObjectName(QString::fromUtf8("Clientlabel"));

        verticalLayout->addWidget(Clientlabel);

        ClientEdit = new QLineEdit(verticalLayoutWidget);
        ClientEdit->setObjectName(QString::fromUtf8("ClientEdit"));

        verticalLayout->addWidget(ClientEdit);

        Hostlabel = new QLabel(verticalLayoutWidget);
        Hostlabel->setObjectName(QString::fromUtf8("Hostlabel"));

        verticalLayout->addWidget(Hostlabel);

        HostEdit = new QLineEdit(verticalLayoutWidget);
        HostEdit->setObjectName(QString::fromUtf8("HostEdit"));

        verticalLayout->addWidget(HostEdit);

        Topiclabel = new QLabel(verticalLayoutWidget);
        Topiclabel->setObjectName(QString::fromUtf8("Topiclabel"));

        verticalLayout->addWidget(Topiclabel);

        TopicEdit = new QLineEdit(verticalLayoutWidget);
        TopicEdit->setObjectName(QString::fromUtf8("TopicEdit"));

        verticalLayout->addWidget(TopicEdit);

        SureButton = new QPushButton(Setting);
        SureButton->setObjectName(QString::fromUtf8("SureButton"));
        SureButton->setGeometry(QRect(150, 510, 111, 28));

        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QWidget *Setting)
    {
        Setting->setWindowTitle(QApplication::translate("Setting", "\350\256\276\347\275\256", nullptr));
        Portlabel->setText(QApplication::translate("Setting", "Port", nullptr));
        Passlabel->setText(QApplication::translate("Setting", "Password", nullptr));
        Userlabel->setText(QApplication::translate("Setting", "Username", nullptr));
        Clientlabel->setText(QApplication::translate("Setting", "Client", nullptr));
        Hostlabel->setText(QApplication::translate("Setting", "HostName", nullptr));
        Topiclabel->setText(QApplication::translate("Setting", "Topic", nullptr));
        SureButton->setText(QApplication::translate("Setting", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
