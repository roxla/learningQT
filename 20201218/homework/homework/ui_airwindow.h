/********************************************************************************
** Form generated from reading UI file 'airwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRWINDOW_H
#define UI_AIRWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AirWindow
{
public:
    QWidget *centralwidget;
    QPushButton *switch_2;
    QLCDNumber *lcdNumber;
    QSpinBox *temperature;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AirWindow)
    {
        if (AirWindow->objectName().isEmpty())
            AirWindow->setObjectName(QStringLiteral("AirWindow"));
        AirWindow->resize(800, 600);
        AirWindow->setStyleSheet(QStringLiteral("AirWindow{background-color: rgb(127, 127, 127);}"));
        centralwidget = new QWidget(AirWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        switch_2 = new QPushButton(centralwidget);
        switch_2->setObjectName(QStringLiteral("switch_2"));
        switch_2->setGeometry(QRect(320, 380, 111, 41));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(320, 160, 111, 51));
        lcdNumber->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"font: 75 9pt \"Adobe Devanagari\";"));
        temperature = new QSpinBox(centralwidget);
        temperature->setObjectName(QStringLiteral("temperature"));
        temperature->setGeometry(QRect(320, 290, 111, 41));
        temperature->setMinimum(16);
        temperature->setMaximum(30);
        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(664, 40, 91, 31));
        AirWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AirWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        AirWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AirWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AirWindow->setStatusBar(statusbar);

        retranslateUi(AirWindow);

        QMetaObject::connectSlotsByName(AirWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AirWindow)
    {
        AirWindow->setWindowTitle(QApplication::translate("AirWindow", "MainWindow", 0));
        switch_2->setText(QApplication::translate("AirWindow", "\347\251\272\350\260\203\345\274\200", 0));
        back->setText(QApplication::translate("AirWindow", "back", 0));
    } // retranslateUi

};

namespace Ui {
    class AirWindow: public Ui_AirWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRWINDOW_H
