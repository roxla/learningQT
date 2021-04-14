#ifndef FORGETDIALOG_H
#define FORGETDIALOG_H

#include "myhead.h"

namespace Ui {
class ForgetDialog;
}

class ForgetDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ForgetDialog(QWidget *parent = 0);
    ~ForgetDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ForgetDialog *ui;
    bool checkQuestion();
    QByteArray changePwd();
};

#endif // FORGETDIALOG_H
