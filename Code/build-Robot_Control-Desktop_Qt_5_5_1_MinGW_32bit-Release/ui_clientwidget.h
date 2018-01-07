/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QLineEdit *lineEditIP;
    QLabel *label;
    QPushButton *pushButtonSend_01;
    QTextEdit *textEditRead;
    QLabel *label_2;
    QLineEdit *lineEditPort;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonConnect;
    QTextEdit *textEditWrite;
    QPushButton *pushButtonSend_04;
    QPushButton *pushButtonSend_02;
    QPushButton *pushButtonSend_05;
    QPushButton *pushButtonSend_03;
    QPushButton *pushButtonSend_06;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QStringLiteral("ClientWidget"));
        ClientWidget->resize(400, 300);
        lineEditIP = new QLineEdit(ClientWidget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setGeometry(QRect(90, 9, 133, 20));
        label = new QLabel(ClientWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 9, 60, 16));
        pushButtonSend_01 = new QPushButton(ClientWidget);
        pushButtonSend_01->setObjectName(QStringLiteral("pushButtonSend_01"));
        pushButtonSend_01->setGeometry(QRect(10, 240, 75, 23));
        textEditRead = new QTextEdit(ClientWidget);
        textEditRead->setObjectName(QStringLiteral("textEditRead"));
        textEditRead->setGeometry(QRect(9, 61, 382, 81));
        textEditRead->setReadOnly(true);
        label_2 = new QLabel(ClientWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(9, 35, 48, 16));
        lineEditPort = new QLineEdit(ClientWidget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setGeometry(QRect(90, 35, 133, 20));
        pushButtonClose = new QPushButton(ClientWidget);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(316, 268, 75, 23));
        pushButtonConnect = new QPushButton(ClientWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(316, 20, 75, 23));
        textEditWrite = new QTextEdit(ClientWidget);
        textEditWrite->setObjectName(QStringLiteral("textEditWrite"));
        textEditWrite->setGeometry(QRect(9, 151, 381, 71));
        pushButtonSend_04 = new QPushButton(ClientWidget);
        pushButtonSend_04->setObjectName(QStringLiteral("pushButtonSend_04"));
        pushButtonSend_04->setGeometry(QRect(10, 270, 75, 23));
        pushButtonSend_02 = new QPushButton(ClientWidget);
        pushButtonSend_02->setObjectName(QStringLiteral("pushButtonSend_02"));
        pushButtonSend_02->setGeometry(QRect(90, 240, 75, 23));
        pushButtonSend_05 = new QPushButton(ClientWidget);
        pushButtonSend_05->setObjectName(QStringLiteral("pushButtonSend_05"));
        pushButtonSend_05->setGeometry(QRect(90, 270, 75, 23));
        pushButtonSend_03 = new QPushButton(ClientWidget);
        pushButtonSend_03->setObjectName(QStringLiteral("pushButtonSend_03"));
        pushButtonSend_03->setGeometry(QRect(180, 240, 75, 23));
        pushButtonSend_06 = new QPushButton(ClientWidget);
        pushButtonSend_06->setObjectName(QStringLiteral("pushButtonSend_06"));
        pushButtonSend_06->setGeometry(QRect(180, 270, 75, 23));

        retranslateUi(ClientWidget);

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QApplication::translate("ClientWidget", "Form", 0));
        label->setText(QApplication::translate("ClientWidget", "\346\234\215\345\212\241\345\231\250IP\357\274\232", 0));
        pushButtonSend_01->setText(QApplication::translate("ClientWidget", "send__01", 0));
        label_2->setText(QApplication::translate("ClientWidget", "\347\253\257\345\217\243\345\217\267\357\274\232", 0));
        pushButtonClose->setText(QApplication::translate("ClientWidget", "close", 0));
        pushButtonConnect->setText(QApplication::translate("ClientWidget", "connect", 0));
        pushButtonSend_04->setText(QApplication::translate("ClientWidget", "send__04", 0));
        pushButtonSend_02->setText(QApplication::translate("ClientWidget", "send__02", 0));
        pushButtonSend_05->setText(QApplication::translate("ClientWidget", "send__05", 0));
        pushButtonSend_03->setText(QApplication::translate("ClientWidget", "send__03", 0));
        pushButtonSend_06->setText(QApplication::translate("ClientWidget", "send__06", 0));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
