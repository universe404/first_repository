#-------------------------------------------------
#
# Project created by QtCreator 2020-10-12T21:36:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = login
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp

HEADERS  += mainwindow.h \
    logindialog.h

FORMS    += mainwindow.ui \
    logindialog.ui
RC_ICONS = myico.ico
