#ifndef MANAGEWINDOW_H
#define MANAGEWINDOW_H

#include <QMainWindow>
#include "myhead.h"
#include "adddialog.h"
#include "changedialog.h"

namespace Ui {
class ManageWindow;
}

class ManageWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManageWindow(QWidget *parent = 0);
    ~ManageWindow();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableWidget_clicked(const QModelIndex &index);

private:
    Ui::ManageWindow *ui;
};

#endif // MANAGEWINDOW_H
