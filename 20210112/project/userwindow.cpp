#include "userwindow.h"
#include "ui_userwindow.h"

// 管理员数据库
QSqlDatabase mybase;

UserWindow::UserWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserWindow)
{
    ui->setupUi(this);
    flag = 0;
    //安装数据库的驱动
    mybase=QSqlDatabase::addDatabase("QSQLITE","111");
    //设置数据库名字
    mybase.setDatabaseName("./db/user.db");
    bool ret = mybase.open();
    if(!ret)
    {
        qDebug()<<"打开数据库失败";
        return;
    }
}

UserWindow::~UserWindow()
{
    delete ui;
}
// 退出登录
void UserWindow::on_pushButton_3_clicked()
{
    //得到上一级窗口，并显示
    this->parentWidget()->show();
    //当前主窗口关闭
    delete this;
}
// 登录
void UserWindow::on_pushButton_clicked()
{
    QString name = ui->userName->text();
    QString pwd = ui->pwd->text();

    //拼接查询语句
    QString cmd = QString("select * from usertable where name=\"%1\" and pwd=\"%2\";").arg(name).arg(pwd);
    //验证用户名密码是否正确
    QSqlQuery query(mybase);
    bool ret = query.exec(cmd);
    if(!ret)
    {
        qDebug()<<"查询表格失败";
        return;
    }
    //获取查询记录
    while(query.next())
    {
        flag = 1;
    }
    if(flag == 0) //说明没有注册这个账号密码
    {
        //弹出致命错误的消息盒子
        QMessageBox::critical(this,"error","账号密码输入错误");
        return;
    }
    else
    {
        flag = 0;
        //跳到主界面
        ManageWindow *manage = new ManageWindow(this);
        ui->userName->setText("");
        ui->pwd->setText("");
        manage->show();
        this->hide();
    }
}

void UserWindow::on_pushButton_2_clicked()
{
    FogetDialog *fogetDia = new FogetDialog(this);
    fogetDia->exec();
}
