#
# VLC-Qt Simple Player
# Copyright (C) 2015 Tadej Novak <tadej@tano.si>
#

TARGET      = simple-player
TEMPLATE    = app
CONFIG 	   += c++11

QT         += widgets

SOURCES    += main.cpp \
    SimplePlayer.cpp \
    EqualizerDialog.cpp

HEADERS    += SimplePlayer.h \
    EqualizerDialog.h

FORMS      += SimplePlayer.ui \
    EqualizerDialog.ui

# VLC-Qt 安装目录
LIBS +=C:/Users/aa/Desktop/VLC_Qt_Install/lib -VLCQtCore -VLCQtWidgets
     INCLUDPATH +=E:/vlc-qt/include
