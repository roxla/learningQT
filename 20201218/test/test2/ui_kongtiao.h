/********************************************************************************
** Form generated from reading UI file 'kongtiao.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KONGTIAO_H
#define UI_KONGTIAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kongtiao
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *kongtiao)
    {
        if (kongtiao->objectName().isEmpty())
            kongtiao->setObjectName(QStringLiteral("kongtiao"));
        kongtiao->resize(800, 600);
        centralwidget = new QWidget(kongtiao);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 190, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 130, 54, 12));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(320, 240, 111, 61));
        kongtiao->setCentralWidget(centralwidget);
        menubar = new QMenuBar(kongtiao);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        kongtiao->setMenuBar(menubar);
        statusbar = new QStatusBar(kongtiao);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        kongtiao->setStatusBar(statusbar);

        retranslateUi(kongtiao);

        QMetaObject::connectSlotsByName(kongtiao);
    } // setupUi

    void retranslateUi(QMainWindow *kongtiao)
    {
        kongtiao->setWindowTitle(QApplication::translate("kongtiao", "MainWindow", 0));
        pushButton->setText(QApplication::translate("kongtiao", "back", 0));
        label->setText(QApplication::translate("kongtiao", "\347\251\272\350\260\203", 0));
    } // retranslateUi

};

namespace Ui {
    class kongtiao: public Ui_kongtiao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KONGTIAO_H
