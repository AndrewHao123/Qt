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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditPort;
    QPushButton *buttonConnect;
    QLabel *label_2;
    QLineEdit *lineEditIP;
    QTextEdit *textEditRead;
    QTextEdit *textEditWrite;
    QPushButton *buttonSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonClose;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QStringLiteral("ClientWidget"));
        ClientWidget->resize(400, 300);
        gridLayout = new QGridLayout(ClientWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ClientWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        lineEditPort = new QLineEdit(ClientWidget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 0, 2, 1, 1);

        buttonConnect = new QPushButton(ClientWidget);
        buttonConnect->setObjectName(QStringLiteral("buttonConnect"));

        gridLayout->addWidget(buttonConnect, 0, 3, 2, 2);

        label_2 = new QLabel(ClientWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        lineEditIP = new QLineEdit(ClientWidget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));

        gridLayout->addWidget(lineEditIP, 1, 2, 1, 1);

        textEditRead = new QTextEdit(ClientWidget);
        textEditRead->setObjectName(QStringLiteral("textEditRead"));
        textEditRead->setReadOnly(true);

        gridLayout->addWidget(textEditRead, 2, 0, 1, 5);

        textEditWrite = new QTextEdit(ClientWidget);
        textEditWrite->setObjectName(QStringLiteral("textEditWrite"));

        gridLayout->addWidget(textEditWrite, 3, 0, 1, 5);

        buttonSend = new QPushButton(ClientWidget);
        buttonSend->setObjectName(QStringLiteral("buttonSend"));

        gridLayout->addWidget(buttonSend, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(217, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 1, 1, 3);

        buttonClose = new QPushButton(ClientWidget);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));

        gridLayout->addWidget(buttonClose, 4, 4, 1, 1);


        retranslateUi(ClientWidget);

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QApplication::translate("ClientWidget", "Form", 0));
        label->setText(QApplication::translate("ClientWidget", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", 0));
        lineEditPort->setText(QApplication::translate("ClientWidget", "8888", 0));
        buttonConnect->setText(QApplication::translate("ClientWidget", "connect", 0));
        label_2->setText(QApplication::translate("ClientWidget", "\345\256\242\346\210\267\347\253\257IP\357\274\232", 0));
        lineEditIP->setText(QApplication::translate("ClientWidget", "127.0.0.1", 0));
        buttonSend->setText(QApplication::translate("ClientWidget", "send", 0));
        buttonClose->setText(QApplication::translate("ClientWidget", "close", 0));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
