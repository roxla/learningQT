#ifndef REGDIALOG_H
#define REGDIALOG_H

#include "myhead.h"

namespace Ui {
class RegDialog;
}

class RegDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegDialog(QWidget *parent = 0);
    ~RegDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RegDialog *ui;
    bool checkReg();
    int getUserNum();
    QString withoutExtension(const QString & fileName);
    // 清空
    void clearReg();
};

#endif // REGDIALOG_H
