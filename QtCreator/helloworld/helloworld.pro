#-------------------------------------------------
#
# Project created by QtCreator 2020-09-28T19:53:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = helloworld
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    point.cpp

HEADERS  += mainwindow.h \
    point.h

FORMS    += mainwindow.ui

RC_ICONS = myico.ico
