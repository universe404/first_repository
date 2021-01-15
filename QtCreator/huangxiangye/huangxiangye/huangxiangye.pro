#-------------------------------------------------
#
# Project created by QtCreator 2020-10-13T10:01:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = huangxiangye
TEMPLATE = app


SOURCES += main.cpp\
        hxy.cpp \
    number.cpp \
    infodialog.cpp \
    logindialog.cpp

HEADERS  += hxy.h \
    number.h \
    infodialog.h \
    logindialog.h

FORMS    += hxy.ui \
    infodialog.ui \
    logindialog.ui

RESOURCES += \
    resources.qrc
RC_ICONS = myico.ico
