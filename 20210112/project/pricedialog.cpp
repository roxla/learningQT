#include "pricedialog.h"
#include "ui_pricedialog.h"
#include <QFile>
#include <QDebug>

priceDialog::priceDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::priceDialog)
{
    ui->setupUi(this);
    get_price_rule();
}

priceDialog::~priceDialog()
{
    delete ui;
}

void priceDialog::on_pushButton_clicked()
{
    this->close();
}
// 获取计费规则
void priceDialog::get_price_rule()
{
    QString filename = "./price"; // "./data/price"
    // 定义QFile对象
    QFile myfile(filename);
    // 打开文件
    bool ret = myfile.open(QIODevice::ReadOnly);
    if(!ret)
    {
        qDebug()<<"open file failed";
        return;
    }

    // 读取文件
    QByteArray mybuf = myfile.readAll();

    //在文本浏览框中显示文件内容
    ui->textBrowser->setText(mybuf);

    // 关闭文件
    myfile.close();
}
