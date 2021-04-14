#include "fogetdialog.h"
#include "ui_fogetdialog.h"

// 管理员数据库
extern QSqlDatabase mybase;

FogetDialog::FogetDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FogetDialog)
{
    ui->setupUi(this);
}

FogetDialog::~FogetDialog()
{
    delete ui;
}

void FogetDialog::on_close_clicked()
{
    //得到上一级窗口，并显示
    this->parentWidget()->show();
    //当前主窗口关闭
    delete this;
}

void FogetDialog::on_ok_clicked()
{
    int flag = 0;
    QString tel;
    //拼接查询语句
    QString cmd = QString("select * from usertable where name=\"%1\";").arg(ui->lineEdit_4->text());
    //验证用户名密码是否正确
    QSqlQuery query(mybase);
    bool ret = query.exec(cmd);
    if(!ret)
    {
        qDebug()<<"查询表格失败";
        return;
    }
    while(query.next()) //说明在表格中已经有了
    {
        tel = query.value("tel").toString();
        flag = 1;
    }
    if(flag == 1)
    {
        if(tel == ui->lineEdit_2->text())
        {
            QString pwd = ui->lineEdit_3->text();
            QString cmd = QString("update usertable set pwd=\"%1\" where tel=\"%2\";").arg(pwd).arg(tel);
            bool ret = query.exec(cmd);
            if(!ret)
            {
                qDebug()<<"修改表格失败";
                return;
            }
            //得到上一级窗口，并显示
            this->parentWidget()->show();
            //当前主窗口关闭
            delete this;
        }
        else
        {
            QMessageBox::critical(this,"error","手机号输入错误");
            return;
        }
    }
    else
    {
        QMessageBox::critical(this,"error","账号输入错误");
        return;
    }
}
