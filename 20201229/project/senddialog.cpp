#include "senddialog.h"
#include "ui_senddialog.h"

SendDialog::SendDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SendDialog)
{
    ui->setupUi(this);
}

SendDialog::~SendDialog()
{
    delete ui;
}

void SendDialog::getSend(QByteArray send)
{
    QListWidgetItem *item = new QListWidgetItem(send);
    item->setTextAlignment(Qt::AlignRight);
    ui->listWidget->addItem(item);
}

void SendDialog::getPic(QString path)
{
    QIcon icon(path);
    QListWidgetItem *item = new QListWidgetItem(icon,"");
    item->setTextAlignment(Qt::RightToLeft);
    ui->listWidget->addItem(item);
//    ui->listWidget->setLayoutDirection(Qt::RightToLeft);
//    QListWidgetItem *item = new QListWidgetItem();
//    ui->listWidget->addItem(item);

//    QLabel *newLabel = new QLabel();
//    newLabel->setGeometry(0,0,80,80);
//    QPixmap map;
//    map.loadFromData(buf);
//    map.scaled(newLabel->size(), Qt::KeepAspectRatio);
//    newLabel->setScaledContents(true);
//    newLabel->setPixmap(map);

//    ui->listWidget->setItemWidget(item,newLabel);
}

void SendDialog::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    if(str=="")
    {
        QMessageBox::warning(this,"Warning","输入内容不能为空");
        return;
    }
    ui->listWidget->addItem(str);
    emit sendData(str);

    ui->lineEdit->setText("");
}

void SendDialog::on_pushButton_2_clicked()
{
    //弹出文件对话框
    QString filepath = QFileDialog::getOpenFileName(this,"表情包文件对话框");
    //
    QIcon icon(filepath);
    QListWidgetItem *item = new QListWidgetItem(icon,"");
    ui->listWidget->addItem(item);
    //打开你选择的表情包
    QFile myfile(filepath);
    myfile.open(QIODevice::ReadOnly);
    //一口气读取整个表情包数据
    QByteArray buf = myfile.readAll();
    qDebug()<<buf;
    //关闭文件
    myfile.close();
    //发送
    emit sendPic(buf);
}
