#-------------------------------------------------
#
# Project created by QtCreator 2017-12-07T09:06:26
#
#-------------------------------------------------

#QT       += core gui
QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QueryModel
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mysqlquerymodel.cpp

HEADERS  += mainwindow.h \
    connection.h \
    mysqlquerymodel.h

FORMS    += mainwindow.ui
