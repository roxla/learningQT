#include "ortherwindow.h"
#include "ui_ortherwindow.h"

// 数据库
extern QSqlDatabase carbase;
// 车位列表
extern QList<CarButton*> allCarList;
// 已用车位
extern int carUser;

OrtherWindow::OrtherWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OrtherWindow)
{
    ui->setupUi(this);
    car_database_init();
}

OrtherWindow::~OrtherWindow()
{
    delete ui;
}

void OrtherWindow::SearchControl(QString objName)
{
    CarButton *btn = ui->centralwidget->findChild<CarButton *>(objName);
    qDebug() << btn->objectName();
}

void OrtherWindow::car_database_init()
{
    //数据库对象给操作数据库的对象(query)绑定在一起
    QSqlQuery query(carbase);
    // 遍历数据库
    QList<CarButton*> carList = ui->centralwidget->findChildren<CarButton*>();
    int i;
    for(i = 0; i < carList.size(); i++)
    {
        CarButton* car = carList.at(i);
        // 将车位装入到QList中
        allCarList.append(car);
        QString cmd = QString("select * from cartable where park=\"%1\";").arg(car->objectName());
        bool ret = query.exec(cmd);
        if(!ret)
        {
            qDebug()<<"查询表格失败";
            return;
        }
        while(query.next()) //说明在表格中已经有这个车位号
        {
            car->setIcon(QIcon(":/new/prefix1/car.png"));
            carUser++;
        }
    }
}

void OrtherWindow::on_arrowRight_clicked()
{
    this->parentWidget()->show();
    this->hide();
}

void OrtherWindow::on_arrowLeft_clicked()
{
    this->parentWidget()->show();
    this->hide();
}
