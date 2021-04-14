/********************************************************************************
** Form generated from reading UI file 'deng.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENG_H
#define UI_DENG_H

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

class Ui_deng
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *deng)
    {
        if (deng->objectName().isEmpty())
            deng->setObjectName(QStringLiteral("deng"));
        deng->resize(800, 600);
        centralwidget = new QWidget(deng);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 170, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(380, 120, 54, 12));
        deng->setCentralWidget(centralwidget);
        menubar = new QMenuBar(deng);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        deng->setMenuBar(menubar);
        statusbar = new QStatusBar(deng);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        deng->setStatusBar(statusbar);

        retranslateUi(deng);

        QMetaObject::connectSlotsByName(deng);
    } // setupUi

    void retranslateUi(QMainWindow *deng)
    {
        deng->setWindowTitle(QApplication::translate("deng", "MainWindow", 0));
        pushButton->setText(QApplication::translate("deng", "back", 0));
        label->setText(QApplication::translate("deng", "\346\216\247\347\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class deng: public Ui_deng {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENG_H
