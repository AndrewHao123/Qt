#-------------------------------------------------
#
# Project created by QtCreator 2017-12-07T15:11:10
#
#-------------------------------------------------

#QT       += core gui
QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TableModel
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    connection.h

FORMS    += mainwindow.ui
