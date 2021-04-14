#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 添加一个水平头
    ui->treeWidget->setHeaderLabel("");
    // 添加顶层节点
    QTreeWidgetItem *item1 = new QTreeWidgetItem(QStringList() << "我的好友");
    ui->treeWidget->addTopLevelItem(item1);
    QTreeWidgetItem *item2 = new QTreeWidgetItem(QStringList() << "我的同学");
    ui->treeWidget->addTopLevelItem(item2);

    //定义几个子节点 --》添加到我的好友顶层节点下面
    QTreeWidgetItem *item11=new QTreeWidgetItem(QStringList()<<"马云");
    QTreeWidgetItem *item12=new QTreeWidgetItem(QStringList()<<"马化腾");
    QTreeWidgetItem *item13=new QTreeWidgetItem(QStringList()<<"周杰伦");

    //加入到顶层节点item1里面
    item1->addChild(item11);
    item1->addChild(item12);
    item1->addChild(item13);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    mydialog = new Dialog();
    qDebug()<<"你点击的是: "<<item->text(column)<<"它所在的列数是:  "<<column;
    mydialog->get_name(item->text(column));
    mydialog->show();
}
