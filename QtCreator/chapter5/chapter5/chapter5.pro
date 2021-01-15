#-------------------------------------------------
#
# Project created by QtCreator 2020-11-09T21:35:43
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = chapter5
TEMPLATE = app


SOURCES += main.cpp\
        demo.cpp \
    chxy.cpp \
    videoplayer.cpp

HEADERS  += demo.h \
    chxy.h \
    videoplayer.h

FORMS    += demo.ui \
    videoplayer.ui

RESOURCES += \
    resources.qrc

RC_ICONS = myico.ico
TRANSLATIONS = english.ts chinese.ts
