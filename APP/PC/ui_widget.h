/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *SettingButton;
    QPushButton *Node3Button;
    QPushButton *Node4Button;
    QPushButton *LogButton;
    QPushButton *Node1Button;
    QPushButton *Node2Button;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *TempLabel1;
    QSpacerItem *verticalSpacer_7;
    QLabel *HumiLabel1;
    QSpacerItem *verticalSpacer_8;
    QLabel *SmokeLabel1;
    QSpacerItem *verticalSpacer_9;
    QLabel *BatteryLabel1;
    QSpacerItem *verticalSpacer_5;
    QLabel *LightLabel1;
    QLabel *TempEdit1;
    QLabel *HumiEdit1;
    QLabel *SmokeEdit1;
    QLabel *BatteryEdit1;
    QLabel *LightEdit1;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *TempLabel2;
    QSpacerItem *verticalSpacer_4;
    QLabel *HumiLabel2;
    QLabel *HumiEdit2;
    QSpacerItem *verticalSpacer_3;
    QLabel *SmokeLabel2;
    QLabel *SmokeEdit2;
    QSpacerItem *verticalSpacer_2;
    QLabel *BatteryLabel2;
    QLabel *BatteryEdit2;
    QSpacerItem *verticalSpacer;
    QLabel *LightLabel2;
    QLabel *LightEdit2;
    QLabel *TempEdit2;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *TempLabel3;
    QSpacerItem *verticalSpacer_6;
    QLabel *HumiLabel3;
    QLabel *HumiEdit3;
    QSpacerItem *verticalSpacer_10;
    QLabel *SmokeLabel3;
    QLabel *SmokeEdit3;
    QSpacerItem *verticalSpacer_11;
    QLabel *BatteryLabel3;
    QLabel *BatteryEdit3;
    QSpacerItem *verticalSpacer_12;
    QLabel *LightLabel3;
    QLabel *LightEdit3;
    QLabel *TempEdit3;
    QLabel *label;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *TempLabel4;
    QLabel *HumiLabel4;
    QLabel *SmokeLabel4;
    QLabel *BatteryLabel4;
    QLabel *LightLabel4;
    QLabel *TempEdit4;
    QLabel *HumiEdit4;
    QLabel *SmokeEdit4;
    QLabel *BatteryEdit4;
    QLabel *LightEdit4;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer_16;
    QLabel *LogLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setWindowModality(Qt::NonModal);
        Widget->resize(1261, 827);
        QFont font;
        font.setPointSize(18);
        Widget->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Long.webp"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        SettingButton = new QPushButton(Widget);
        SettingButton->setObjectName(QString::fromUtf8("SettingButton"));
        SettingButton->setGeometry(QRect(30, 0, 381, 391));
        SettingButton->setBaseSize(QSize(0, 0));
        Node3Button = new QPushButton(Widget);
        Node3Button->setObjectName(QString::fromUtf8("Node3Button"));
        Node3Button->setGeometry(QRect(840, 410, 391, 391));
        Node4Button = new QPushButton(Widget);
        Node4Button->setObjectName(QString::fromUtf8("Node4Button"));
        Node4Button->setGeometry(QRect(430, 410, 391, 391));
        LogButton = new QPushButton(Widget);
        LogButton->setObjectName(QString::fromUtf8("LogButton"));
        LogButton->setGeometry(QRect(30, 410, 381, 391));
        Node1Button = new QPushButton(Widget);
        Node1Button->setObjectName(QString::fromUtf8("Node1Button"));
        Node1Button->setGeometry(QRect(430, 0, 391, 391));
        Node1Button->setMaximumSize(QSize(16777215, 16777215));
        Node2Button = new QPushButton(Widget);
        Node2Button->setObjectName(QString::fromUtf8("Node2Button"));
        Node2Button->setGeometry(QRect(840, 0, 391, 391));
        Node2Button->setMaximumSize(QSize(16777215, 16777215));
        formLayoutWidget_2 = new QWidget(Widget);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(470, 60, 301, 261));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        TempLabel1 = new QLabel(formLayoutWidget_2);
        TempLabel1->setObjectName(QString::fromUtf8("TempLabel1"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, TempLabel1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(1, QFormLayout::FieldRole, verticalSpacer_7);

        HumiLabel1 = new QLabel(formLayoutWidget_2);
        HumiLabel1->setObjectName(QString::fromUtf8("HumiLabel1"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, HumiLabel1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(3, QFormLayout::FieldRole, verticalSpacer_8);

        SmokeLabel1 = new QLabel(formLayoutWidget_2);
        SmokeLabel1->setObjectName(QString::fromUtf8("SmokeLabel1"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, SmokeLabel1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(5, QFormLayout::FieldRole, verticalSpacer_9);

        BatteryLabel1 = new QLabel(formLayoutWidget_2);
        BatteryLabel1->setObjectName(QString::fromUtf8("BatteryLabel1"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, BatteryLabel1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(7, QFormLayout::FieldRole, verticalSpacer_5);

        LightLabel1 = new QLabel(formLayoutWidget_2);
        LightLabel1->setObjectName(QString::fromUtf8("LightLabel1"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, LightLabel1);

        TempEdit1 = new QLabel(formLayoutWidget_2);
        TempEdit1->setObjectName(QString::fromUtf8("TempEdit1"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(18);
        TempEdit1->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, TempEdit1);

        HumiEdit1 = new QLabel(formLayoutWidget_2);
        HumiEdit1->setObjectName(QString::fromUtf8("HumiEdit1"));
        HumiEdit1->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, HumiEdit1);

        SmokeEdit1 = new QLabel(formLayoutWidget_2);
        SmokeEdit1->setObjectName(QString::fromUtf8("SmokeEdit1"));
        SmokeEdit1->setFont(font1);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, SmokeEdit1);

        BatteryEdit1 = new QLabel(formLayoutWidget_2);
        BatteryEdit1->setObjectName(QString::fromUtf8("BatteryEdit1"));
        BatteryEdit1->setFont(font1);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, BatteryEdit1);

        LightEdit1 = new QLabel(formLayoutWidget_2);
        LightEdit1->setObjectName(QString::fromUtf8("LightEdit1"));
        LightEdit1->setFont(font1);

        formLayout_2->setWidget(8, QFormLayout::FieldRole, LightEdit1);

        formLayoutWidget = new QWidget(Widget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(910, 60, 281, 261));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        TempLabel2 = new QLabel(formLayoutWidget);
        TempLabel2->setObjectName(QString::fromUtf8("TempLabel2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, TempLabel2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_4);

        HumiLabel2 = new QLabel(formLayoutWidget);
        HumiLabel2->setObjectName(QString::fromUtf8("HumiLabel2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, HumiLabel2);

        HumiEdit2 = new QLabel(formLayoutWidget);
        HumiEdit2->setObjectName(QString::fromUtf8("HumiEdit2"));
        HumiEdit2->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, HumiEdit2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer_3);

        SmokeLabel2 = new QLabel(formLayoutWidget);
        SmokeLabel2->setObjectName(QString::fromUtf8("SmokeLabel2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, SmokeLabel2);

        SmokeEdit2 = new QLabel(formLayoutWidget);
        SmokeEdit2->setObjectName(QString::fromUtf8("SmokeEdit2"));
        SmokeEdit2->setFont(font1);

        formLayout->setWidget(4, QFormLayout::FieldRole, SmokeEdit2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_2);

        BatteryLabel2 = new QLabel(formLayoutWidget);
        BatteryLabel2->setObjectName(QString::fromUtf8("BatteryLabel2"));

        formLayout->setWidget(6, QFormLayout::LabelRole, BatteryLabel2);

        BatteryEdit2 = new QLabel(formLayoutWidget);
        BatteryEdit2->setObjectName(QString::fromUtf8("BatteryEdit2"));
        BatteryEdit2->setFont(font1);

        formLayout->setWidget(6, QFormLayout::FieldRole, BatteryEdit2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::FieldRole, verticalSpacer);

        LightLabel2 = new QLabel(formLayoutWidget);
        LightLabel2->setObjectName(QString::fromUtf8("LightLabel2"));

        formLayout->setWidget(8, QFormLayout::LabelRole, LightLabel2);

        LightEdit2 = new QLabel(formLayoutWidget);
        LightEdit2->setObjectName(QString::fromUtf8("LightEdit2"));
        LightEdit2->setFont(font1);

        formLayout->setWidget(8, QFormLayout::FieldRole, LightEdit2);

        TempEdit2 = new QLabel(formLayoutWidget);
        TempEdit2->setObjectName(QString::fromUtf8("TempEdit2"));
        TempEdit2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, TempEdit2);

        formLayoutWidget_3 = new QWidget(Widget);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(900, 460, 301, 301));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        TempLabel3 = new QLabel(formLayoutWidget_3);
        TempLabel3->setObjectName(QString::fromUtf8("TempLabel3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, TempLabel3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(1, QFormLayout::FieldRole, verticalSpacer_6);

        HumiLabel3 = new QLabel(formLayoutWidget_3);
        HumiLabel3->setObjectName(QString::fromUtf8("HumiLabel3"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, HumiLabel3);

        HumiEdit3 = new QLabel(formLayoutWidget_3);
        HumiEdit3->setObjectName(QString::fromUtf8("HumiEdit3"));
        HumiEdit3->setFont(font1);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, HumiEdit3);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(3, QFormLayout::FieldRole, verticalSpacer_10);

        SmokeLabel3 = new QLabel(formLayoutWidget_3);
        SmokeLabel3->setObjectName(QString::fromUtf8("SmokeLabel3"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, SmokeLabel3);

        SmokeEdit3 = new QLabel(formLayoutWidget_3);
        SmokeEdit3->setObjectName(QString::fromUtf8("SmokeEdit3"));
        SmokeEdit3->setFont(font1);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, SmokeEdit3);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(5, QFormLayout::FieldRole, verticalSpacer_11);

        BatteryLabel3 = new QLabel(formLayoutWidget_3);
        BatteryLabel3->setObjectName(QString::fromUtf8("BatteryLabel3"));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, BatteryLabel3);

        BatteryEdit3 = new QLabel(formLayoutWidget_3);
        BatteryEdit3->setObjectName(QString::fromUtf8("BatteryEdit3"));
        BatteryEdit3->setFont(font1);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, BatteryEdit3);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(7, QFormLayout::FieldRole, verticalSpacer_12);

        LightLabel3 = new QLabel(formLayoutWidget_3);
        LightLabel3->setObjectName(QString::fromUtf8("LightLabel3"));

        formLayout_3->setWidget(8, QFormLayout::LabelRole, LightLabel3);

        LightEdit3 = new QLabel(formLayoutWidget_3);
        LightEdit3->setObjectName(QString::fromUtf8("LightEdit3"));
        LightEdit3->setFont(font1);

        formLayout_3->setWidget(8, QFormLayout::FieldRole, LightEdit3);

        TempEdit3 = new QLabel(formLayoutWidget_3);
        TempEdit3->setObjectName(QString::fromUtf8("TempEdit3"));
        TempEdit3->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, TempEdit3);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 80, 201, 181));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Setting.png")));
        formLayoutWidget_4 = new QWidget(Widget);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(470, 460, 291, 301));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        TempLabel4 = new QLabel(formLayoutWidget_4);
        TempLabel4->setObjectName(QString::fromUtf8("TempLabel4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, TempLabel4);

        HumiLabel4 = new QLabel(formLayoutWidget_4);
        HumiLabel4->setObjectName(QString::fromUtf8("HumiLabel4"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, HumiLabel4);

        SmokeLabel4 = new QLabel(formLayoutWidget_4);
        SmokeLabel4->setObjectName(QString::fromUtf8("SmokeLabel4"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, SmokeLabel4);

        BatteryLabel4 = new QLabel(formLayoutWidget_4);
        BatteryLabel4->setObjectName(QString::fromUtf8("BatteryLabel4"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, BatteryLabel4);

        LightLabel4 = new QLabel(formLayoutWidget_4);
        LightLabel4->setObjectName(QString::fromUtf8("LightLabel4"));

        formLayout_4->setWidget(8, QFormLayout::LabelRole, LightLabel4);

        TempEdit4 = new QLabel(formLayoutWidget_4);
        TempEdit4->setObjectName(QString::fromUtf8("TempEdit4"));
        TempEdit4->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, TempEdit4);

        HumiEdit4 = new QLabel(formLayoutWidget_4);
        HumiEdit4->setObjectName(QString::fromUtf8("HumiEdit4"));
        HumiEdit4->setFont(font1);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, HumiEdit4);

        SmokeEdit4 = new QLabel(formLayoutWidget_4);
        SmokeEdit4->setObjectName(QString::fromUtf8("SmokeEdit4"));
        SmokeEdit4->setFont(font1);

        formLayout_4->setWidget(4, QFormLayout::FieldRole, SmokeEdit4);

        BatteryEdit4 = new QLabel(formLayoutWidget_4);
        BatteryEdit4->setObjectName(QString::fromUtf8("BatteryEdit4"));
        BatteryEdit4->setFont(font1);

        formLayout_4->setWidget(6, QFormLayout::FieldRole, BatteryEdit4);

        LightEdit4 = new QLabel(formLayoutWidget_4);
        LightEdit4->setObjectName(QString::fromUtf8("LightEdit4"));
        LightEdit4->setFont(font1);

        formLayout_4->setWidget(8, QFormLayout::FieldRole, LightEdit4);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(1, QFormLayout::FieldRole, verticalSpacer_13);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(3, QFormLayout::FieldRole, verticalSpacer_14);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(5, QFormLayout::FieldRole, verticalSpacer_15);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(7, QFormLayout::FieldRole, verticalSpacer_16);

        LogLabel = new QLabel(Widget);
        LogLabel->setObjectName(QString::fromUtf8("LogLabel"));
        LogLabel->setGeometry(QRect(120, 490, 201, 181));
        LogLabel->setPixmap(QPixmap(QString::fromUtf8("images/Logs.png")));
        SettingButton->raise();
        Node2Button->raise();
        Node4Button->raise();
        Node3Button->raise();
        LogButton->raise();
        Node1Button->raise();
        formLayoutWidget_2->raise();
        formLayoutWidget->raise();
        formLayoutWidget_3->raise();
        label->raise();
        formLayoutWidget_4->raise();
        LogLabel->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\345\237\272\344\272\216\351\276\231\350\212\257\346\264\276\346\227\240\347\272\277\344\274\240\346\204\237\345\231\250\347\275\221\347\273\234\347\232\204\344\273\223\345\202\250\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        SettingButton->setText(QString());
        Node3Button->setText(QString());
        Node4Button->setText(QString());
        LogButton->setText(QString());
        Node1Button->setText(QString());
        Node2Button->setText(QString());
        TempLabel1->setText(QApplication::translate("Widget", "\347\216\257\345\242\203\346\270\251\345\272\246", nullptr));
        HumiLabel1->setText(QApplication::translate("Widget", "\347\216\257\345\242\203\346\271\277\345\272\246", nullptr));
        SmokeLabel1->setText(QApplication::translate("Widget", "\347\203\237\351\233\276\346\265\223\345\272\246", nullptr));
        BatteryLabel1->setText(QApplication::translate("Widget", "\350\212\202\347\202\271\347\224\265\351\207\217", nullptr));
        LightLabel1->setText(QApplication::translate("Widget", "\345\205\211\347\205\247\345\274\272\345\272\246", nullptr));
        TempEdit1->setText(QString());
        HumiEdit1->setText(QString());
        SmokeEdit1->setText(QString());
        BatteryEdit1->setText(QString());
        LightEdit1->setText(QString());
        TempLabel2->setText(QApplication::translate("Widget", "\347\216\257\345\242\203\346\270\251\345\272\246", nullptr));
        HumiLabel2->setText(QApplication::translate("Widget", "\347\216\257\345\242\203\346\271\277\345\272\246", nullptr));
        HumiEdit2->setText(QString());
        SmokeLabel2->setText(QApplication::translate("Widget", "\347\203\237\351\233\276\346\265\223\345\272\246", nullptr));
        SmokeEdit2->setText(QString());
        BatteryLabel2->setText(QApplication::translate("Widget", "\350\212\202\347\202\271\347\224\265\351\207\217", nullptr));
        BatteryEdit2->setText(QString());
        LightLabel2->setText(QApplication::translate("Widget", "\345\205\211\347\205\247\345\274\272\345\272\246", nullptr));
        LightEdit2->setText(QString());
        TempEdit2->setText(QString());
        TempLabel3->setText(QApplication::translate("Widget", "\347\216\257\345\242\203\346\270\251\345\272\246", nullptr));
        HumiLabel3->setText(QApplication::translate("Widget", "\347\216\257\345\242\203\346\271\277\345\272\246", nullptr));
        HumiEdit3->setText(QString());
        SmokeLabel3->setText(QApplication::translate("Widget", "\347\203\237\351\233\276\346\265\223\345\272\246", nullptr));
        SmokeEdit3->setText(QString());
        BatteryLabel3->setText(QApplication::translate("Widget", "\350\212\202\347\202\271\347\224\265\351\207\217", nullptr));
        BatteryEdit3->setText(QString());
        LightLabel3->setText(QApplication::translate("Widget", "\345\205\211\347\205\247\345\274\272\345\272\246", nullptr));
        LightEdit3->setText(QString());
        TempEdit3->setText(QString());
        label->setText(QString());
        TempLabel4->setText(QApplication::translate("Widget", "\347\216\257\345\242\203\346\270\251\345\272\246", nullptr));
        HumiLabel4->setText(QApplication::translate("Widget", "\347\216\257\345\242\203\346\271\277\345\272\246", nullptr));
        SmokeLabel4->setText(QApplication::translate("Widget", "\347\203\237\351\233\276\346\265\223\345\272\246", nullptr));
        BatteryLabel4->setText(QApplication::translate("Widget", "\350\212\202\347\202\271\347\224\265\351\207\217", nullptr));
        LightLabel4->setText(QApplication::translate("Widget", "\345\205\211\347\205\247\345\274\272\345\272\246", nullptr));
        TempEdit4->setText(QString());
        HumiEdit4->setText(QString());
        SmokeEdit4->setText(QString());
        BatteryEdit4->setText(QString());
        LightEdit4->setText(QString());
        LogLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
