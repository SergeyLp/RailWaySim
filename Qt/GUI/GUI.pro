#-------------------------------------------------
#
# Project created by QtCreator 2015-10-13T15:59:42
#
#-------------------------------------------------

QT       += gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

CONFIG += c++14 -Wall -Wextra -pedantic


unix:!macx|win32: LIBS += -L$$PWD/../../mgwin/ -lcore

INCLUDEPATH += $$PWD/../../mgwin
DEPENDPATH += $$PWD/../../mgwin

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../../mgwin/core.lib
else:unix:!macx|win32-g++: PRE_TARGETDEPS += $$PWD/../../mgwin/libcore.a
