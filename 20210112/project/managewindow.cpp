#include "managewindow.h"
#include "ui_managewindow.h"

// 数据库
extern QSqlDatabase carbase;

ManageWindow::ManageWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManageWindow)
{
    ui->setupUi(this);
    //设置表格的列数
    ui->tableWidget->setColumnCount(4);
    //设置水平头--》表格中的字段名字
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"车牌号"<<"卡号"<<"手机号"<<"是否为住户");
    //设置行数
    ui->tableWidget->setRowCount(MAX_CAR);
}

ManageWindow::~ManageWindow()
{
    delete ui;
}
// 退出
void ManageWindow::on_pushButton_3_clicked()
{
    //得到上一级窗口，并显示
    this->parentWidget()->show();
    //当前主窗口关闭
    delete this;
}

void ManageWindow::on_pushButton_clicked()
{
    //数据库对象给操作数据库的对象(query)绑定在一起
    QSqlQuery query(carbase);
    bool ret = query.exec("select * from cartable");
    if(!ret)
    {
        qDebug()<<"查询数据失败,失败的原因是: "<<query.lastError().text();
        return;
    }
    //获取查询结果
    int i = 0;
    while(query.next())
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value("pass").toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value("cardid").toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value("tel").toString()));
        if(query.value("isuser").toInt() == 1)
            ui->tableWidget->setItem(i,3,new QTableWidgetItem("是"));
        else
            ui->tableWidget->setItem(i,3,new QTableWidgetItem("否"));

        i++;
    }
}

void ManageWindow::on_pushButton_2_clicked()
{
    AddDialog *addDia = new AddDialog(this);
    addDia->exec();
}

void ManageWindow::on_tableWidget_clicked(const QModelIndex &index)
{
    QString pass = ui->tableWidget->item(index.row(),0)->text();
    QString cardId = ui->tableWidget->item(index.row(),1)->text();
    QString tel = ui->tableWidget->item(index.row(),2)->text();
    QString isUser = ui->tableWidget->item(index.row(),3)->text();

    ChangeDialog *changeDia = new ChangeDialog(this);
    changeDia->get_data(pass,cardId,tel,isUser);
    changeDia->exec();
}
