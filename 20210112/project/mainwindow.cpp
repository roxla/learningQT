#include "mainwindow.h"
#include "ui_mainwindow.h"

// 数据库
QSqlDatabase carbase;
// 车位列表
QList<CarButton*> allCarList;
// 出车标志位
bool carOut;
// 已用车位
int carUser;
// 卡号
extern unsigned int cardid;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    carUser = 0;
    // 出车标志位
    carOut = true;
    // 初始化数据库设置
    car_database_init();
    // 初始化另一个界面
    ortherwindow = new OrtherWindow(this);
    // 初始化摄像头对象，调用方法
    camera = new Camera();
    camera->camera_init();
    //

    // 初始化读卡对象，调用方法
    card = new GetCard();
    // 读卡信号槽
    connect(card,SIGNAL(sendCard(unsigned int)),this,SLOT(check_out_car(unsigned int)));
    card->open_serial();
    card->init_tty();
    card->start();
    // 初始化定时器，并设置定时时间
    // 每小时获取天气
    weatherTimer = new QTimer(this);
    weatherTimer->setInterval(3600000);
    // 每秒获取时间
    dateTimer = new QTimer(this);
    dateTimer->setInterval(1000);
    // 定时获取摄像头
    camTimer = new QTimer(this);
    camTimer->setInterval(80);
    // 关联信号槽
    // 服务器天气信号槽
    connect(&manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(get_city_weather(QNetworkReply *)));
    // 定时器信号槽
    connect(weatherTimer,SIGNAL(timeout()),this,SLOT(get_weather()));
    connect(dateTimer,SIGNAL(timeout()),this,SLOT(get_date_time()));
    connect(camTimer,SIGNAL(timeout()),this,SLOT(get_camera()));
    //启动定时器
    weatherTimer->start();
    dateTimer->start();
    camTimer->start();
    // 初始执行一次
    send_request();
    get_date_time();
}

MainWindow::~MainWindow()
{
    camera->camera_uninit();
    delete ui;
}
// 转到管理员登录界面
void MainWindow::on_user_clicked()
{
    usrWin = new UserWindow(this);
    usrWin->show();
    this->hide();
}
// 获取天气预报
void MainWindow::get_weather()
{
    send_request();
}

void MainWindow::send_request()
{
    QString path = "http://www.weather.com.cn/data/cityinfo/101280101.html";
    //定义请求对象
    QUrl url(path);
    QNetworkRequest req(url);
    //发送该请求给服务器
    manager.get(req);
}

void MainWindow::get_city_weather(QNetworkReply *reply)
{
    QString weather;
    //读取服务器回复的应答信息
    QByteArray buf = reply->readAll(); //buf里面存放就是从网上获取的天气预报信息(json数据)
    //    qDebug()<<"buf: "<<buf;
    //定义json解析错误对象
    QJsonParseError err;
    //把网络上得到的json标准化存储
    QJsonDocument mydoc=QJsonDocument::fromJson(buf,&err);
    //判断要解析的json数据是否合法
    if(err.error!=QJsonParseError::NoError)
    {
        qDebug()<<"json数据有问题: "<<err.errorString();
        return;
    }

    //剥洋葱，一步步解析json
    QJsonObject obj=mydoc.object();
    //再解析得到weatherinfo对应的值
    QJsonValue val = obj.value("weatherinfo");
    QJsonObject otherobj = val.toObject();
    //再解析
    if (otherobj.contains("city"))
    {
        QJsonValue value = otherobj.value("city");
        if (value.isString())
        {
            weather.append(value.toString());
            weather.append(" ");
        }
    }
    if (otherobj.contains("temp1"))
    {
        QJsonValue value = otherobj.value("temp1");
        if (value.isString())
        {
            weather.append(value.toString());
            weather.append("~");
        }
    }
    if (otherobj.contains("temp2"))
    {
        QJsonValue value = otherobj.value("temp2");
        if (value.isString())
        {
            weather.append(value.toString());
            weather.append(" ");
        }
    }
    if (otherobj.contains("weather"))
    {
        QJsonValue value = otherobj.value("weather");
        if (value.isString())
        {
            weather.append(value.toString());
        }
    }
    //    qDebug()<<weather;
    //在文本浏览框中显示天气预报信息
    ui->weather->setText(weather);
}
// 获取日期时间
void MainWindow::get_date_time()
{
    QDate mydate = QDate::currentDate();
    QTime mytime = QTime::currentTime();
    QString allTime = QString("%1 %2").arg(mydate.toString("yyyy-MM-dd")).arg(mytime.toString("hh:mm:ss"));
    ui->time->setText(allTime);
    // 显示可用车位
    ui->blank->setText(QString("  %1 个").arg(MAX_CAR - carUser));
}
// 获取摄像头图像
void MainWindow::get_camera()
{
    camera->camera_capture();
}
// 计费规则弹窗
void MainWindow::on_pushButton_clicked()
{
    cashDia = new priceDialog(this);
    cashDia->exec();
}

void MainWindow::on_arrowRight_clicked()
{
    ortherwindow->show();
    this->hide();
}

void MainWindow::on_arrowLeft_clicked()
{
    ortherwindow->show();
    this->hide();
}

void MainWindow::check_out_car(unsigned int num)
{
    ui->stopPrice->setText("");
    ui->stopTime->setText("");

    int flag = 0, i_time = 0, isUser = 0;
    float price;
    QString carPark;
    QString cmd = QString("select * from cartable where cardid=\"%1\";").arg(num,0,16);
    //数据库对象给操作数据库的对象(query)绑定在一起
    QSqlQuery query(carbase);
    bool ret = query.exec(cmd);
    if(!ret)
    {
        qDebug()<<"查询表格失败";
        return;
    }
    while(query.next()) //说明在表格中已经有了
    {
        i_time = query.value("time").toInt();
        isUser = query.value("isuser").toInt();
        carPark = query.value("park").toString();
        flag = 1;
    }
    if(flag == 1)
    {
        // 判断是否出车
        if(i_time > 0)
        {
            QDateTime o_time = QDateTime::currentDateTime();   //获取当前时间
            int timeT = o_time.toTime_t() - i_time;
            int day = 0;
            if(timeT / 60 <= 5)
                price = 0;
            else
            {
                day = timeT / 86400;
                if(day > 0)
                {
                    int temp = (timeT - day * 86400) / 60 - 5;
                    if(temp > 30)
                        temp = 30;
                    price = 30 * day + temp;
                }
                else
                {
                    int temp = timeT / 60 - 5;
                    if(temp > 30)
                        temp = 30;
                    price = temp;
                }
            }
            // 住户不用付钱
            if(isUser == 1)
                price = 0;
            // 显示
            int hour = (timeT - day * 86400) / 3600;
            int min = (timeT - day * 86400 - hour * 3600) / 60;
            ui->stopPrice->setText(QString("  %1 元").arg(price));
            ui->stopTime->setText(QString("  %1天%2时%3分").arg(day).arg(hour).arg(min));

            car_out(carPark, num);
        }
        else
        {
            carOut = false;
        }
    }
    else
    {
        if(!this->isHidden())
        {
            QMessageBox::warning(this,"warning","该卡为空，请去找管理员添加");
        }
    }

}

void MainWindow::car_database_init()
{
    // 安装数据库驱动
    carbase = QSqlDatabase::addDatabase("QSQLITE","222");
    // 给数据库文件设置路径名
    carbase.setDatabaseName("./db/car.db");
    // 打开数据库文件
    bool ret = carbase.open();
    if(!ret)
    {
        qDebug()<<"打开数据库失败";
        return;
    }
    //数据库对象给操作数据库的对象(query)绑定在一起
    QSqlQuery query(carbase);
    // 遍历数据库
    QList<CarButton*> carList = ui->centralWidget->findChildren<CarButton*>();
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

void MainWindow::car_out(QString park, unsigned int num)
{
    int i;
    for(i = 0; i < allCarList.size(); i++)
    {
        CarButton* car = allCarList.at(i);
        if(car->objectName() == park)
        {
            car->setIcon(QIcon());
        }
    }
    QString cmd = QString("update cartable set time=0,park=\"\" where cardid=\"%1\";").arg(num,0,16);
    //数据库对象给操作数据库的对象(query)绑定在一起
    QSqlQuery query(carbase);
    bool ret = query.exec(cmd);
    if(!ret)
    {
        qDebug()<<query.lastError().text();
        return;
    }
    carUser--;
    cardid = 0;
}
