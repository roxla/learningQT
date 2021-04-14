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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *weather;
    QLabel *time;
    QHBoxLayout *horizontalLayout;
    QLineEdit *ip;
    QLineEdit *port;
    QPushButton *link;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QPushButton *logout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(289, 491);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        weather = new QLabel(centralwidget);
        weather->setObjectName(QStringLiteral("weather"));
        weather->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(weather);

        time = new QLabel(centralwidget);
        time->setObjectName(QStringLiteral("time"));
        time->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(time);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ip = new QLineEdit(centralwidget);
        ip->setObjectName(QStringLiteral("ip"));
        ip->setMinimumSize(QSize(0, 25));
        ip->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(ip);

        port = new QLineEdit(centralwidget);
        port->setObjectName(QStringLiteral("port"));
        port->setMinimumSize(QSize(60, 25));
        port->setMaximumSize(QSize(60, 25));
        port->setMaxLength(5);

        horizontalLayout->addWidget(port);

        link = new QPushButton(centralwidget);
        link->setObjectName(QStringLiteral("link"));
        link->setMinimumSize(QSize(0, 25));
        link->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(link);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        logout = new QPushButton(centralwidget);
        logout->setObjectName(QStringLiteral("logout"));

        verticalLayout->addWidget(logout);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 289, 23));
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
        weather->setText(QString());
        time->setText(QString());
        ip->setPlaceholderText(QApplication::translate("MainWindow", "IP\345\234\260\345\235\200", 0));
        port->setPlaceholderText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", 0));
        link->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\345\245\275\345\217\213\345\210\227\350\241\250", 0));
        logout->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
