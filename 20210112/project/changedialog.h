#ifndef CHANGEDIALOG_H
#define CHANGEDIALOG_H

#include <QDialog>
#include "myhead.h"

namespace Ui {
class ChangeDialog;
}

class ChangeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeDialog(QWidget *parent = 0);
    ~ChangeDialog();
    void get_data(QString pass,QString cardId,QString tel,QString isUser);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ChangeDialog *ui;
};

#endif // CHANGEDIALOG_H
