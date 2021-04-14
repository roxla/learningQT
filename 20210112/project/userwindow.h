#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>
#include "myhead.h"
#include "managewindow.h"
#include "fogetdialog.h"

namespace Ui {
class UserWindow;
}

class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserWindow(QWidget *parent = 0);
    ~UserWindow();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::UserWindow *ui;
    int flag; //标记是否有注册账号密码
};

#endif // USERWINDOW_H
