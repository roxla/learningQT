#-------------------------------------------------
#
# Project created by QtCreator 2021-01-12T16:33:55
#
#-------------------------------------------------

QT       += core gui network sql multimedia multimediawidgets serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ortherwindow.cpp \
    camera.cpp \
    otherbutton.cpp \
    normalbutton.cpp \
    specialbutton.cpp \
    solfkey.cpp \
    userwindow.cpp \
    pricedialog.cpp \
    getcard.cpp \
    managewindow.cpp \
    carbutton.cpp \
    fogetdialog.cpp \
    adddialog.cpp \
    changedialog.cpp

HEADERS  += mainwindow.h \
    ortherwindow.h \
    myhead.h \
    camera.h \
    normalbutton.h \
    specialbutton.h \
    otherbutton.h \
    solfkey.h \
    userwindow.h \
    pricedialog.h \
    getcard.h \
    managewindow.h \
    carbutton.h \
    fogetdialog.h \
    adddialog.h \
    changedialog.h

FORMS    += mainwindow.ui \
    ortherwindow.ui \
    solfkey.ui \
    userwindow.ui \
    pricedialog.ui \
    managewindow.ui \
    fogetdialog.ui \
    adddialog.ui \
    changedialog.ui

RESOURCES += \
    icon/icon.qrc
