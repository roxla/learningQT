#-------------------------------------------------
#
# Project created by QtCreator 2020-12-18T19:19:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = homework
TEMPLATE = app


SOURCES += main.cpp\
        loginwindow.cpp \
    mainwindow.cpp \
    lightwindow.cpp \
    airwindow.cpp

HEADERS  += loginwindow.h \
    mainwindow.h \
    lightwindow.h \
    airwindow.h

FORMS    += loginwindow.ui \
    mainwindow.ui \
    lightwindow.ui \
    airwindow.ui

RESOURCES += \
    pic.qrc
