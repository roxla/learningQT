/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *back;
    QPushButton *light;
    QPushButton *airConn;
    QLabel *label;
    QLabel *userName;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(638, 472);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(300, 230, 161, 31));
        light = new QPushButton(centralwidget);
        light->setObjectName(QStringLiteral("light"));
        light->setGeometry(QRect(300, 153, 161, 31));
        airConn = new QPushButton(centralwidget);
        airConn->setObjectName(QStringLiteral("airConn"));
        airConn->setGeometry(QRect(300, 190, 161, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 80, 31, 31));
        userName = new QLabel(centralwidget);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setGeometry(QRect(300, 80, 159, 31));
        QFont font;
        font.setPointSize(12);
        userName->setFont(font);
        userName->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        userName->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 638, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        back->setText(QApplication::translate("MainWindow", "back", 0));
        light->setText(QApplication::translate("MainWindow", "\346\216\247\347\201\257", 0));
        airConn->setText(QApplication::translate("MainWindow", "\347\251\272\350\260\203", 0));
        label->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267", 0));
        userName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
