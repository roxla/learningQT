#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include "myhead.h"

namespace Ui {
class AddDialog;
}

class AddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddDialog(QWidget *parent = 0);
    ~AddDialog();

private slots:
    void on_pushButton_2_clicked();

    void get_cardID();

    void on_pushButton_clicked();

private:
    Ui::AddDialog *ui;
    // 定时器
    QTimer *cardTime;
    // cardID
    unsigned int id;
};

#endif // ADDDIALOG_H
