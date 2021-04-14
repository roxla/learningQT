/********************************************************************************
** Form generated from reading UI file 'pricedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRICEDIALOG_H
#define UI_PRICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_priceDialog
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *priceDialog)
    {
        if (priceDialog->objectName().isEmpty())
            priceDialog->setObjectName(QStringLiteral("priceDialog"));
        priceDialog->resize(332, 335);
        gridLayout = new QGridLayout(priceDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(priceDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 1, 0, 1, 1);

        pushButton = new QPushButton(priceDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);


        retranslateUi(priceDialog);

        QMetaObject::connectSlotsByName(priceDialog);
    } // setupUi

    void retranslateUi(QDialog *priceDialog)
    {
        priceDialog->setWindowTitle(QApplication::translate("priceDialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("priceDialog", "\345\205\263\351\227\255", 0));
    } // retranslateUi

};

namespace Ui {
    class priceDialog: public Ui_priceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRICEDIALOG_H
