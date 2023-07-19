/********************************************************************************
** Form generated from reading UI file 'node1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NODE1_H
#define UI_NODE1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Node1
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Timelable;
    QLineEdit *TimeEdit;
    QLabel *Locationlabel;
    QLineEdit *LocationEdit;
    QLabel *TemHumiDe;
    QLineEdit *TemHumiEdit;
    QLabel *LightDe;
    QLineEdit *LightEdit;
    QLabel *SmokeDe;
    QLineEdit *SmokeEdit;

    void setupUi(QWidget *Node1)
    {
        if (Node1->objectName().isEmpty())
            Node1->setObjectName(QString::fromUtf8("Node1"));
        Node1->resize(404, 536);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Long.webp"), QSize(), QIcon::Normal, QIcon::Off);
        Node1->setWindowIcon(icon);
        verticalLayoutWidget = new QWidget(Node1);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(49, 60, 291, 431));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Timelable = new QLabel(verticalLayoutWidget);
        Timelable->setObjectName(QString::fromUtf8("Timelable"));

        verticalLayout->addWidget(Timelable);

        TimeEdit = new QLineEdit(verticalLayoutWidget);
        TimeEdit->setObjectName(QString::fromUtf8("TimeEdit"));

        verticalLayout->addWidget(TimeEdit);

        Locationlabel = new QLabel(verticalLayoutWidget);
        Locationlabel->setObjectName(QString::fromUtf8("Locationlabel"));

        verticalLayout->addWidget(Locationlabel);

        LocationEdit = new QLineEdit(verticalLayoutWidget);
        LocationEdit->setObjectName(QString::fromUtf8("LocationEdit"));

        verticalLayout->addWidget(LocationEdit);

        TemHumiDe = new QLabel(verticalLayoutWidget);
        TemHumiDe->setObjectName(QString::fromUtf8("TemHumiDe"));

        verticalLayout->addWidget(TemHumiDe);

        TemHumiEdit = new QLineEdit(verticalLayoutWidget);
        TemHumiEdit->setObjectName(QString::fromUtf8("TemHumiEdit"));

        verticalLayout->addWidget(TemHumiEdit);

        LightDe = new QLabel(verticalLayoutWidget);
        LightDe->setObjectName(QString::fromUtf8("LightDe"));

        verticalLayout->addWidget(LightDe);

        LightEdit = new QLineEdit(verticalLayoutWidget);
        LightEdit->setObjectName(QString::fromUtf8("LightEdit"));

        verticalLayout->addWidget(LightEdit);

        SmokeDe = new QLabel(verticalLayoutWidget);
        SmokeDe->setObjectName(QString::fromUtf8("SmokeDe"));

        verticalLayout->addWidget(SmokeDe);

        SmokeEdit = new QLineEdit(verticalLayoutWidget);
        SmokeEdit->setObjectName(QString::fromUtf8("SmokeEdit"));

        verticalLayout->addWidget(SmokeEdit);


        retranslateUi(Node1);

        QMetaObject::connectSlotsByName(Node1);
    } // setupUi

    void retranslateUi(QWidget *Node1)
    {
        Node1->setWindowTitle(QApplication::translate("Node1", "\350\212\202\347\202\271\350\257\246\346\203\205", nullptr));
        Timelable->setText(QApplication::translate("Node1", "\346\227\266\351\227\264", nullptr));
        Locationlabel->setText(QApplication::translate("Node1", "\345\234\260\347\202\271", nullptr));
        TemHumiDe->setText(QApplication::translate("Node1", "\346\270\251\346\271\277\345\272\246\344\274\240\346\204\237\345\231\250\345\236\213\345\217\267", nullptr));
        LightDe->setText(QApplication::translate("Node1", "\345\205\211\345\274\272\350\256\241\345\236\213\345\217\267", nullptr));
        SmokeDe->setText(QApplication::translate("Node1", "\347\203\237\351\233\276\344\274\240\346\204\237\345\231\250\345\236\213\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Node1: public Ui_Node1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NODE1_H
