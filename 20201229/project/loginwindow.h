#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "myhead.h"
#include "regdialog.h"
#include "forgetdialog.h"
#include "mainwindow.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_4_clicked();

    void on_autologin_clicked(bool checked);

    void on_remember_clicked(bool checked);

private:
    Ui::LoginWindow *ui;
    // 软键盘
    bool keyboard;
    // 注册弹窗
    RegDialog *regdialog;
    // 忘记密码弹窗
    ForgetDialog *forgetdialog;
    //
    QMap<QString,QArrayData> loginMap;
    // 密码计数
    int l_count;
    // 主窗口
    MainWindow *newWin;
    // 判断是否记住密码&自动登录
    void checkLogin(QString name);
    void readLogin();
    bool isRemember;
};

#endif // LOGINWINDOW_H
