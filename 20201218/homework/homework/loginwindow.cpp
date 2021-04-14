#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "mainwindow.h"
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_login_clicked()
{
    QString name = ui->name->text();
    QString pwd = ui->pwd->text();
    if(name == "gec" && pwd == "123")
    {
        MainWindow *newwin = new MainWindow(this);
        newwin->getattr(name);
        ui->name->setText("");
        ui->pwd->setText("");
        newwin->show();
        this->hide();
    }
    else
    {
        QMessageBox::warning(this,"warning","账号或者密码错误");
    }
}
