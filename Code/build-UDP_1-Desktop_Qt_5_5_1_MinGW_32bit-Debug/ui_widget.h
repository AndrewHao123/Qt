/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

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

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_IP;
    QLabel *label_2;
    QLineEdit *lineEdit_Port;
    QTextEdit *textEdit;
    QPushButton *pushButton_Send;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Close;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_IP = new QLineEdit(Widget);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));

        gridLayout->addWidget(lineEdit_IP, 0, 1, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_Port = new QLineEdit(Widget);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));

        gridLayout->addWidget(lineEdit_Port, 1, 1, 1, 1);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 2, 0, 1, 3);

        pushButton_Send = new QPushButton(Widget);
        pushButton_Send->setObjectName(QStringLiteral("pushButton_Send"));

        gridLayout->addWidget(pushButton_Send, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(217, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 1, 1, 1);

        pushButton_Close = new QPushButton(Widget);
        pushButton_Close->setObjectName(QStringLiteral("pushButton_Close"));

        gridLayout->addWidget(pushButton_Close, 3, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "\345\257\271\346\226\271\347\232\204IP\357\274\232", 0));
        label_2->setText(QApplication::translate("Widget", "\345\257\271\346\226\271\347\232\204\347\253\257\345\217\243\357\274\232", 0));
        pushButton_Send->setText(QApplication::translate("Widget", "send", 0));
        pushButton_Close->setText(QApplication::translate("Widget", "close", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
