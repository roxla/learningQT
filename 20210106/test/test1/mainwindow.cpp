#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(3); //3列
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"名称"<<"数量(公斤)"<<"单价(元)");
    // 安装数据库驱动
    mybase = QSqlDatabase::addDatabase("QSQLITE");
    // 给数据库文件设置路径名
    mybase.setDatabaseName("./shop.db");
    // 打开数据库文件
    bool ret = mybase.open();
    if(!ret)
    {
        qDebug()<<"打开数据库失败";
        return;
    }
    //往数据库中新建一个学生表格
    QSqlQuery query(mybase);//数据库对象给操作数据库的对象(query)绑定在一起
    ret=query.exec("create table if not exists shoptable (name text unique,num int,price int);");
    if(!ret)
    {
        qDebug()<<"新建表格失败,失败的原因是: "<<query.lastError().text();
        return;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addbt_clicked()
{
    bool ret;
    QString name = ui->addle_1->text();
    QString num = ui->addle_2->text();
    QString price = ui->addle_3->text();

    QString cmd = QString("insert into shoptable values(\"%1\",%2,%3)").arg(name).arg(num.toInt()).arg(price.toFloat());
    QSqlQuery query(mybase);
    ret = query.exec(cmd);
    if(!ret)
    {
        qDebug()<<"插入数据失败,失败的原因是: "<<query.lastError().text();
        return;
    }
    else
    {
        QMessageBox::information(this,"success","添加成功");
        ui->addle_1->setText("");
        ui->addle_2->setText("");
        ui->addle_3->setText("");
    }
}

void MainWindow::getShopNum()
{
    bool ret;
    QSqlQuery query(mybase); //数据库对象给操作数据库的对象(query)绑定在一起
    ret = query.exec("select * from shoptable;");
    if(!ret)
    {
        qDebug()<<"查询全部数据失败,失败的原因是: "<<query.lastError().text();
        return;
    }

    //获取查询结果
    QSqlRecord rec = query.record();
    //遍历打印结果
    int i;

}
