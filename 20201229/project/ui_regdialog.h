/********************************************************************************
** Form generated from reading UI file 'regdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGDIALOG_H
#define UI_REGDIALOG_H

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

class Ui_RegDialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *pwd;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_3;
    QLineEdit *q1;
    QComboBox *comboBox_4;
    QLineEdit *q2;
    QComboBox *comboBox_5;
    QLineEdit *q3;
    QPushButton *pushButton;

    void setupUi(QDialog *RegDialog)
    {
        if (RegDialog->objectName().isEmpty())
            RegDialog->setObjectName(QStringLiteral("RegDialog"));
        RegDialog->resize(270, 332);
        gridLayout_3 = new QGridLayout(RegDialog);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(RegDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(70, 25));
        label_7->setMaximumSize(QSize(70, 25));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_7);

        name = new QLineEdit(RegDialog);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout_2->addWidget(name);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_8 = new QLabel(RegDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(70, 25));
        label_8->setMaximumSize(QSize(70, 25));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_8);

        pwd = new QLineEdit(RegDialog);
        pwd->setObjectName(QStringLiteral("pwd"));

        horizontalLayout_3->addWidget(pwd);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(RegDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(70, 25));
        label->setMaximumSize(QSize(70, 25));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label);

        label_4 = new QLabel(RegDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(60, 25));
        label_4->setMaximumSize(QSize(60, 25));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_4);

        label_2 = new QLabel(RegDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(70, 25));
        label_2->setMaximumSize(QSize(70, 25));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(RegDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(60, 25));
        label_5->setMaximumSize(QSize(60, 25));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_5);

        label_3 = new QLabel(RegDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(70, 25));
        label_3->setMaximumSize(QSize(70, 25));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_3);

        label_6 = new QLabel(RegDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(60, 25));
        label_6->setMaximumSize(QSize(60, 25));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox_3 = new QComboBox(RegDialog);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(0, 25));
        comboBox_3->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(comboBox_3);

        q1 = new QLineEdit(RegDialog);
        q1->setObjectName(QStringLiteral("q1"));
        q1->setMinimumSize(QSize(0, 25));
        q1->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(q1);

        comboBox_4 = new QComboBox(RegDialog);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setMinimumSize(QSize(0, 25));
        comboBox_4->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(comboBox_4);

        q2 = new QLineEdit(RegDialog);
        q2->setObjectName(QStringLiteral("q2"));
        q2->setMinimumSize(QSize(0, 25));
        q2->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(q2);

        comboBox_5 = new QComboBox(RegDialog);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setMinimumSize(QSize(0, 25));
        comboBox_5->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(comboBox_5);

        q3 = new QLineEdit(RegDialog);
        q3->setObjectName(QStringLiteral("q3"));
        q3->setMinimumSize(QSize(0, 25));
        q3->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(q3);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(RegDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(RegDialog);

        comboBox_4->setCurrentIndex(1);
        comboBox_5->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(RegDialog);
    } // setupUi

    void retranslateUi(QDialog *RegDialog)
    {
        RegDialog->setWindowTitle(QApplication::translate("RegDialog", "\346\263\250\345\206\214", 0));
        label_7->setText(QApplication::translate("RegDialog", "\347\224\250\346\210\267\345\220\215", 0));
        label_8->setText(QApplication::translate("RegDialog", "\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("RegDialog", "\345\257\206\344\277\235\351\227\256\351\242\2301", 0));
        label_4->setText(QString());
        label_2->setText(QApplication::translate("RegDialog", "\345\257\206\344\277\235\351\227\256\351\242\2302", 0));
        label_5->setText(QString());
        label_3->setText(QApplication::translate("RegDialog", "\345\257\206\344\277\235\351\227\256\351\242\2303", 0));
        label_6->setText(QString());
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("RegDialog", "\344\275\240\345\255\246\346\240\241\347\232\204\345\220\215\345\255\227", 0)
         << QApplication::translate("RegDialog", "\344\275\240\350\200\201\345\270\210\347\232\204\345\220\215\345\255\227", 0)
         << QApplication::translate("RegDialog", "\344\275\240\347\210\266\344\272\262\347\232\204\345\267\245\344\275\234", 0)
         << QApplication::translate("RegDialog", "\344\275\240\346\257\215\344\272\262\347\232\204\345\267\245\344\275\234", 0)
         << QApplication::translate("RegDialog", "\344\275\240\345\226\234\346\254\242\347\232\204\344\270\234\350\245\277", 0)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("RegDialog", "\344\275\240\345\255\246\346\240\241\347\232\204\345\220\215\345\255\227", 0)
         << QApplication::translate("RegDialog", "\344\275\240\350\200\201\345\270\210\347\232\204\345\220\215\345\255\227", 0)
         << QApplication::translate("RegDialog", "\344\275\240\347\210\266\344\272\262\347\232\204\345\267\245\344\275\234", 0)
         << QApplication::translate("RegDialog", "\344\275\240\346\257\215\344\272\262\347\232\204\345\267\245\344\275\234", 0)
         << QApplication::translate("RegDialog", "\344\275\240\345\226\234\346\254\242\347\232\204\344\270\234\350\245\277", 0)
        );
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("RegDialog", "\344\275\240\345\255\246\346\240\241\347\232\204\345\220\215\345\255\227", 0)
         << QApplication::translate("RegDialog", "\344\275\240\350\200\201\345\270\210\347\232\204\345\220\215\345\255\227", 0)
         << QApplication::translate("RegDialog", "\344\275\240\347\210\266\344\272\262\347\232\204\345\267\245\344\275\234", 0)
         << QApplication::translate("RegDialog", "\344\275\240\346\257\215\344\272\262\347\232\204\345\267\245\344\275\234", 0)
         << QApplication::translate("RegDialog", "\344\275\240\345\226\234\346\254\242\347\232\204\344\270\234\350\245\277", 0)
        );
        pushButton->setText(QApplication::translate("RegDialog", "\346\263\250\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class RegDialog: public Ui_RegDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGDIALOG_H
