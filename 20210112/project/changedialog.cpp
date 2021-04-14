#include "changedialog.h"
#include "ui_changedialog.h"

// 数据库
extern QSqlDatabase carbase;

ChangeDialog::ChangeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeDialog)
{
    ui->setupUi(this);
}

ChangeDialog::~ChangeDialog()
{
    delete ui;
}

void ChangeDialog::get_data(QString pass, QString cardId, QString tel, QString isUser)
{
    ui->comboBox->setCurrentText(isUser);
    ui->label_9->setText(cardId);
    ui->lineEdit->setText(pass);
    ui->lineEdit_2->setText(tel);
}

void ChangeDialog::on_pushButton_2_clicked()
{
    //得到上一级窗口，并显示
    this->parentWidget()->show();
    //当前主窗口关闭
    delete this;
}

void ChangeDialog::on_pushButton_clicked()
{
    QString id = ui->label_9->text();
    QString pass = ui->lineEdit->text();
    QString tel = ui->lineEdit_2->text();
    QString isUser = ui->comboBox->currentText();
    int isU;
    if(pass != "" || tel != "")
    {
        if(isUser == "是")
            isU = 1;
        else
            isU = 0;
        QString cmd = QString("update cartable set pass=\"%1\",tel=\"%2\",isuser=%3 where cardid=\"%4\";").arg(pass).arg(tel).arg(isU).arg(id);
//        qDebug()<<cmd;
        QSqlQuery query(carbase);
        bool ret = query.exec(cmd);
        if(!ret)
        {
            qDebug()<<query.lastError().text();
            return;
        }
        //得到上一级窗口，并显示
        this->parentWidget()->show();
        //当前主窗口关闭
        delete this;
    }
    else
    {
        QMessageBox::warning(this,"Warning","有必填项未填写");
    }
}
