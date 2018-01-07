#-------------------------------------------------
#
# Project created by QtCreator 2017-12-09T09:30:32
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Robot_Control
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp \
    serverwidget.cpp \
    clientwidget.cpp

HEADERS  += mainwindow.h \
    logindialog.h \
    serverwidget.h \
    clientwidget.h

FORMS    += mainwindow.ui \
    serverwidget.ui \
    clientwidget.ui

RESOURCES += \
    icon.qrc

CONFIG += C++11
