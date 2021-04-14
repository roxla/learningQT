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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addbt;
    QLineEdit *addle_1;
    QLineEdit *addle_2;
    QLineEdit *addle_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *changebt;
    QLineEdit *changele_1;
    QLineEdit *changele_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *delbt;
    QLineEdit *delle;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *searchbt;
    QLineEdit *searchle;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(565, 509);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(545, 300));
        tableWidget->setMaximumSize(QSize(545, 300));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        addbt = new QPushButton(centralWidget);
        addbt->setObjectName(QStringLiteral("addbt"));
        addbt->setMinimumSize(QSize(75, 25));
        addbt->setMaximumSize(QSize(75, 25));

        horizontalLayout_4->addWidget(addbt);

        addle_1 = new QLineEdit(centralWidget);
        addle_1->setObjectName(QStringLiteral("addle_1"));
        addle_1->setMinimumSize(QSize(150, 25));
        addle_1->setMaximumSize(QSize(150, 25));

        horizontalLayout_4->addWidget(addle_1);

        addle_2 = new QLineEdit(centralWidget);
        addle_2->setObjectName(QStringLiteral("addle_2"));
        addle_2->setMinimumSize(QSize(150, 25));
        addle_2->setMaximumSize(QSize(150, 25));

        horizontalLayout_4->addWidget(addle_2);

        addle_3 = new QLineEdit(centralWidget);
        addle_3->setObjectName(QStringLiteral("addle_3"));
        addle_3->setMinimumSize(QSize(150, 25));
        addle_3->setMaximumSize(QSize(150, 25));

        horizontalLayout_4->addWidget(addle_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        changebt = new QPushButton(centralWidget);
        changebt->setObjectName(QStringLiteral("changebt"));
        changebt->setMinimumSize(QSize(75, 25));
        changebt->setMaximumSize(QSize(75, 25));

        horizontalLayout_3->addWidget(changebt);

        changele_1 = new QLineEdit(centralWidget);
        changele_1->setObjectName(QStringLiteral("changele_1"));
        changele_1->setMinimumSize(QSize(150, 25));
        changele_1->setMaximumSize(QSize(150, 25));

        horizontalLayout_3->addWidget(changele_1);

        changele_2 = new QLineEdit(centralWidget);
        changele_2->setObjectName(QStringLiteral("changele_2"));
        changele_2->setMinimumSize(QSize(150, 25));
        changele_2->setMaximumSize(QSize(150, 25));

        horizontalLayout_3->addWidget(changele_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        delbt = new QPushButton(centralWidget);
        delbt->setObjectName(QStringLiteral("delbt"));
        delbt->setMinimumSize(QSize(75, 25));
        delbt->setMaximumSize(QSize(75, 25));

        horizontalLayout_2->addWidget(delbt);

        delle = new QLineEdit(centralWidget);
        delle->setObjectName(QStringLiteral("delle"));
        delle->setMinimumSize(QSize(150, 25));
        delle->setMaximumSize(QSize(150, 25));

        horizontalLayout_2->addWidget(delle);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        searchbt = new QPushButton(centralWidget);
        searchbt->setObjectName(QStringLiteral("searchbt"));
        searchbt->setMinimumSize(QSize(75, 25));
        searchbt->setMaximumSize(QSize(75, 25));

        horizontalLayout->addWidget(searchbt);

        searchle = new QLineEdit(centralWidget);
        searchle->setObjectName(QStringLiteral("searchle"));
        searchle->setMinimumSize(QSize(150, 25));
        searchle->setMaximumSize(QSize(150, 25));

        horizontalLayout->addWidget(searchle);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 565, 23));
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
        addbt->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", 0));
        addle_1->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\220\215\347\247\260", 0));
        addle_2->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\225\260\351\207\217", 0));
        addle_3->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\344\273\267\346\240\274", 0));
        changebt->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", 0));
        changele_1->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\220\215\347\247\260", 0));
        changele_2->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\344\273\267\346\240\274", 0));
        label->setText(QString());
        delbt->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", 0));
        delle->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\220\215\347\247\260", 0));
        label_2->setText(QString());
        searchbt->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
        searchle->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\220\215\347\247\260", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
