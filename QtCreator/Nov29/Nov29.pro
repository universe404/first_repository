QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
QMAKE_CXXFLAGS+= -msse2
SOURCES += \
    main.cpp \
    mainwindow.cpp \
    statistic.cpp \
    vlcwrapper.cpp

HEADERS += \
    algorithm.h \
    asciifont.h \
    mainwindow.h \
    statistic.h \
    vardefs.h \
    vlcwrapper.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
LIBS +=$$quote(C:\Users\aa\Desktop\vlc-3.0.11\sdk\lib\libvlc.lib)
LIBS += $$quote(C:\Users\aa\Desktop\vlc-3.0.11\sdk\lib\libvlccore.lib)
INCLUDEPATH += \
    $$quote(C:\Users\aa\Desktop\vlc-3.0.11\sdk\include)
RESOURCES += \
    resources.qrc

DISTFILES += \
    Nov29.pro.user \
    Nov9.pro.user
