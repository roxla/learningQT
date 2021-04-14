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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_16;
    QPushButton *pushButton_13;
    QPushButton *pushButton_15;
    QPushButton *pushButton_14;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(596, 503);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(180, 21, 322, 384));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setMinimumSize(QSize(0, 50));
        lineEdit->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(12);
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(75, 75));
        pushButton_12->setMaximumSize(QSize(75, 75));

        horizontalLayout->addWidget(pushButton_12);

        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(75, 75));
        pushButton_11->setMaximumSize(QSize(75, 75));

        horizontalLayout->addWidget(pushButton_11);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(75, 75));
        pushButton_8->setMaximumSize(QSize(75, 75));

        horizontalLayout->addWidget(pushButton_8);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(75, 75));
        pushButton_2->setMaximumSize(QSize(75, 75));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(75, 75));
        pushButton_5->setMaximumSize(QSize(75, 75));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(75, 75));
        pushButton_10->setMaximumSize(QSize(75, 75));

        horizontalLayout_2->addWidget(pushButton_10);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(75, 75));
        pushButton_7->setMaximumSize(QSize(75, 75));

        horizontalLayout_2->addWidget(pushButton_7);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(75, 75));
        pushButton_3->setMaximumSize(QSize(75, 75));

        horizontalLayout_2->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(75, 75));
        pushButton_4->setMaximumSize(QSize(75, 75));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(75, 75));
        pushButton->setMaximumSize(QSize(75, 75));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(75, 75));
        pushButton_9->setMaximumSize(QSize(75, 75));

        horizontalLayout_3->addWidget(pushButton_9);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(75, 75));
        pushButton_6->setMaximumSize(QSize(75, 75));

        horizontalLayout_3->addWidget(pushButton_6);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_16 = new QPushButton(widget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setMinimumSize(QSize(75, 75));
        pushButton_16->setMaximumSize(QSize(75, 75));

        horizontalLayout_4->addWidget(pushButton_16);

        pushButton_13 = new QPushButton(widget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(75, 75));
        pushButton_13->setMaximumSize(QSize(75, 75));

        horizontalLayout_4->addWidget(pushButton_13);

        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setMinimumSize(QSize(75, 75));
        pushButton_15->setMaximumSize(QSize(75, 75));

        horizontalLayout_4->addWidget(pushButton_15);

        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(75, 75));
        pushButton_14->setMaximumSize(QSize(75, 75));

        horizontalLayout_4->addWidget(pushButton_14);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 596, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "7", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "8", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "9", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "/", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "4", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "5", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "6", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "X", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "1", 0));
        pushButton->setText(QApplication::translate("MainWindow", "2", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "3", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "+", 0));
        pushButton_16->setText(QApplication::translate("MainWindow", "C", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_15->setText(QApplication::translate("MainWindow", "=", 0));
        pushButton_14->setText(QApplication::translate("MainWindow", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
