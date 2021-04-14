/********************************************************************************
** Form generated from reading UI file 'lightwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTWINDOW_H
#define UI_LIGHTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LightWindow
{
public:
    QWidget *centralwidget;
    QPushButton *back;
    QPushButton *switch_2;
    QPushButton *light;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LightWindow)
    {
        if (LightWindow->objectName().isEmpty())
            LightWindow->setObjectName(QStringLiteral("LightWindow"));
        LightWindow->resize(800, 600);
        centralwidget = new QWidget(LightWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(330, 300, 101, 31));
        switch_2 = new QPushButton(centralwidget);
        switch_2->setObjectName(QStringLiteral("switch_2"));
        switch_2->setGeometry(QRect(430, 110, 101, 41));
        light = new QPushButton(centralwidget);
        light->setObjectName(QStringLiteral("light"));
        light->setGeometry(QRect(290, 90, 80, 80));
        light->setMinimumSize(QSize(80, 80));
        light->setMaximumSize(QSize(80, 80));
        light->setStyleSheet(QLatin1String("border-radius: 40px;\n"
"border: 1px solid black;\n"
"background-color: rgb(127, 127, 127);"));
        LightWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LightWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        LightWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LightWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LightWindow->setStatusBar(statusbar);

        retranslateUi(LightWindow);

        QMetaObject::connectSlotsByName(LightWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LightWindow)
    {
        LightWindow->setWindowTitle(QApplication::translate("LightWindow", "MainWindow", 0));
        back->setText(QApplication::translate("LightWindow", "back", 0));
        switch_2->setText(QApplication::translate("LightWindow", "\347\224\265\347\201\257\345\274\200", 0));
        light->setText(QApplication::translate("LightWindow", "\347\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class LightWindow: public Ui_LightWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTWINDOW_H
