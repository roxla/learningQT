/********************************************************************************
** Form generated from reading UI file 'forgetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETDIALOG_H
#define UI_FORGETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ForgetDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *account;
    QLineEdit *pwd;
    QComboBox *comboBox;
    QLineEdit *question;
    QPushButton *pushButton;

    void setupUi(QDialog *ForgetDialog)
    {
        if (ForgetDialog->objectName().isEmpty())
            ForgetDialog->setObjectName(QStringLiteral("ForgetDialog"));
        ForgetDialog->resize(247, 178);
        ForgetDialog->setFocusPolicy(Qt::StrongFocus);
        gridLayout = new QGridLayout(ForgetDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(ForgetDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(60, 25));
        label_3->setMaximumSize(QSize(60, 25));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(ForgetDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(60, 25));
        label_2->setMaximumSize(QSize(60, 25));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_2);

        label = new QLabel(ForgetDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 25));
        label->setMaximumSize(QSize(60, 25));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label);

        label_4 = new QLabel(ForgetDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(60, 25));
        label_4->setMaximumSize(QSize(60, 25));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        account = new QLineEdit(ForgetDialog);
        account->setObjectName(QStringLiteral("account"));
        account->setMinimumSize(QSize(0, 25));
        account->setMaximumSize(QSize(16777215, 25));
        account->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(account);

        pwd = new QLineEdit(ForgetDialog);
        pwd->setObjectName(QStringLiteral("pwd"));
        pwd->setMinimumSize(QSize(0, 25));
        pwd->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(pwd);

        comboBox = new QComboBox(ForgetDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(0, 25));
        comboBox->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(comboBox);

        question = new QLineEdit(ForgetDialog);
        question->setObjectName(QStringLiteral("question"));
        question->setMinimumSize(QSize(0, 25));
        question->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(question);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(ForgetDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(ForgetDialog);

        QMetaObject::connectSlotsByName(ForgetDialog);
    } // setupUi

    void retranslateUi(QDialog *ForgetDialog)
    {
        ForgetDialog->setWindowTitle(QApplication::translate("ForgetDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", 0));
        label_3->setText(QApplication::translate("ForgetDialog", "\350\264\246\345\217\267", 0));
        label_2->setText(QApplication::translate("ForgetDialog", "\346\226\260\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("ForgetDialog", "\345\257\206\344\277\235\351\227\256\351\242\230", 0));
        label_4->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ForgetDialog", "\344\275\240\345\255\246\346\240\241\347\232\204\345\220\215\345\255\227", 0)
         << QApplication::translate("ForgetDialog", "\344\275\240\350\200\201\345\270\210\347\232\204\345\220\215\345\255\227", 0)
         << QApplication::translate("ForgetDialog", "\344\275\240\347\210\266\344\272\262\347\232\204\345\267\245\344\275\234", 0)
         << QApplication::translate("ForgetDialog", "\344\275\240\346\257\215\344\272\262\347\232\204\345\267\245\344\275\234", 0)
         << QApplication::translate("ForgetDialog", "\344\275\240\345\226\234\346\254\242\347\232\204\344\270\234\350\245\277", 0)
        );
        pushButton->setText(QApplication::translate("ForgetDialog", "\347\241\256\350\256\244", 0));
    } // retranslateUi

};

namespace Ui {
    class ForgetDialog: public Ui_ForgetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETDIALOG_H
