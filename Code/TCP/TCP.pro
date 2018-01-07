#-------------------------------------------------
#
# Project created by QtCreator 2017-12-07T17:32:29
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TCP
TEMPLATE = app


SOURCES += main.cpp\
        serverwidget.cpp \
    clientwidget.cpp

HEADERS  += serverwidget.h \
    clientwidget.h

FORMS    += serverwidget.ui \
    clientwidget.ui

CONFIG += C++11
