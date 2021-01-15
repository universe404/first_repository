#-------------------------------------------------
#
# Project created by QtCreator 2020-11-23T12:05:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sqlModle
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    connection.cpp

HEADERS  += mainwindow.h \
    connection.h

FORMS    += mainwindow.ui

QT +=sql
