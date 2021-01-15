#-------------------------------------------------
#
# Project created by QtCreator 2020-10-26T22:20:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = counter
TEMPLATE = app


SOURCES += main.cpp\
        counter.cpp

HEADERS  += counter.h

FORMS    += counter.ui
RC_ICONS = myico.ico

RESOURCES += \
    qss.qrc
