#-------------------------------------------------
#
# Project created by QtCreator 2020-11-23T20:07:45
#
#-------------------------------------------------

QT       += core gui
QT       +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = manager
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    logindialog.cpp

HEADERS  += widget.h \
    logindialog.h \
    connect.h

FORMS    += widget.ui \
    logindialog.ui
