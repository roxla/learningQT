#ifndef FOGETDIALOG_H
#define FOGETDIALOG_H

#include <QDialog>
#include "myhead.h"

namespace Ui {
class FogetDialog;
}

class FogetDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FogetDialog(QWidget *parent = 0);
    ~FogetDialog();

private slots:
    void on_close_clicked();

    void on_ok_clicked();

private:
    Ui::FogetDialog *ui;
};

#endif // FOGETDIALOG_H
