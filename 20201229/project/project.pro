#-------------------------------------------------
#
# Project created by QtCreator 2020-12-29T10:44:04
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project
TEMPLATE = app


SOURCES += main.cpp\
        loginwindow.cpp \
    mainwindow.cpp \
    normalbutton.cpp \
    solfkey.cpp \
    regdialog.cpp \
    forgetdialog.cpp \
    otherbutton.cpp \
    specialbutton.cpp \
    mylineedit.cpp \
    senddialog.cpp

HEADERS  += loginwindow.h \
    mainwindow.h \
    solfkey.h \
    normalbutton.h \
    regdialog.h \
    myhead.h \
    forgetdialog.h \
    otherbutton.h \
    specialbutton.h \
    mylineedit.h \
    senddialog.h

FORMS    += loginwindow.ui \
    mainwindow.ui \
    solfkey.ui \
    regdialog.ui \
    forgetdialog.ui \
    senddialog.ui

RESOURCES += \
    pic.qrc
