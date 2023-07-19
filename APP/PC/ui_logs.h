/********************************************************************************
** Form generated from reading UI file 'logs.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGS_H
#define UI_LOGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Logs
{
public:
    QTextEdit *LogsEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *TopicLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *TopicNameLabel;
    QPushButton *SaveButton;

    void setupUi(QWidget *Logs)
    {
        if (Logs->objectName().isEmpty())
            Logs->setObjectName(QString::fromUtf8("Logs"));
        Logs->resize(630, 418);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Long.webp"), QSize(), QIcon::Normal, QIcon::Off);
        Logs->setWindowIcon(icon);
        LogsEdit = new QTextEdit(Logs);
        LogsEdit->setObjectName(QString::fromUtf8("LogsEdit"));
        LogsEdit->setGeometry(QRect(30, 90, 581, 241));
        layoutWidget = new QWidget(Logs);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 581, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        TopicLabel = new QLabel(layoutWidget);
        TopicLabel->setObjectName(QString::fromUtf8("TopicLabel"));

        horizontalLayout_2->addWidget(TopicLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        TopicNameLabel = new QLabel(layoutWidget);
        TopicNameLabel->setObjectName(QString::fromUtf8("TopicNameLabel"));

        horizontalLayout_2->addWidget(TopicNameLabel);

        SaveButton = new QPushButton(Logs);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setGeometry(QRect(240, 350, 111, 41));

        retranslateUi(Logs);

        QMetaObject::connectSlotsByName(Logs);
    } // setupUi

    void retranslateUi(QWidget *Logs)
    {
        Logs->setWindowTitle(QApplication::translate("Logs", "\346\227\245\345\277\227", nullptr));
        TopicLabel->setText(QApplication::translate("Logs", "Topic", nullptr));
        TopicNameLabel->setText(QApplication::translate("Logs", "/sys/jk3pz9zX1pF/clientAPP/thing/service/property/set", nullptr));
        SaveButton->setText(QApplication::translate("Logs", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Logs: public Ui_Logs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGS_H
