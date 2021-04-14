#include "adddialog.h"
#include "ui_adddialog.h"

// 卡号
extern unsigned int cardid;
// 数据库
extern QSqlDatabase carbase;

AddDialog::AddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDialog)
{
    ui->setupUi(this);
    // 定时检测读卡
    cardTime = new QTimer(this);
    cardTime->setInterval(80);
    // 定时器信号槽
    connect(cardTime,SIGNAL(timeout()),this,SLOT(get_cardID()));
    //启动定时器
    cardTime->start();
}

AddDialog::~AddDialog()
{
    delete ui;
}

void AddDialog::on_pushButton_2_clicked()
{
    //得到上一级窗口，并显示
    this->parentWidget()->show();
    //当前主窗口关闭
    delete this;
}

void AddDialog::get_cardID()
{
    if(cardid != 0)
    {
        id = cardid;
        ui->label_9->setText(QString("  %1").arg(cardid,0,16));
    }
    cardTime->stop();
}


void AddDialog::on_pushButton_clicked()
{
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
        QString cmd = QString("insert into cartable values (\"%1\",\"%2\",\"%3\",%4,0,\"\");").arg(pass).arg(id,0,16).arg(tel).arg(isU);
        QSqlQuery query(carbase);
        bool ret = query.exec(cmd);
        if(!ret)
        {
            qDebug()<<query.lastError().text();
            return;
        }
        cardid = 0;
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
