#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sendDialog = NULL;
    //初始化定时器，并设置定时时间
    mytimer = new QTimer(this);
    mytimer->setInterval(1000);
    //关联信号与槽
    connect(mytimer,SIGNAL(timeout()),this,SLOT(getTime()));
    //启动定时器
    mytimer->start();

    //关联finished信号
    connect(&manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(getWeather(QNetworkReply *)));
    sendRequest();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getName(QString name)
{
    QString title = QString("用户：%1").arg(name);
    userName = name;
    this->setWindowTitle(title);
    // 生成端口号
    qsrand(time(NULL)); //产生随机数种子
    port = qrand() % 60000 + 10000;
    // 绑定客户端自己的ip和端口号
    mysock.bind(QHostAddress::Any,port,QAbstractSocket::ReuseAddressHint);
    //关联信号与槽
    connect(&mysock,SIGNAL(readyRead()),this,SLOT(recvFun()));
}
//发送信息的函数
void MainWindow::sendServer(QString data)
{
    qDebug()<<"text"<<otherclientmsg;
    // 获取要说的话
    QString buf = QString("%1:msg:%2").arg(otherclientmsg).arg(data);
    qDebug()<<"text"<<buf;
    mysock.write(buf.toUtf8());
}
//发送图片的函数
void MainWindow::sendPicServer(QByteArray buf)
{
    QByteArray pic;
    QString data = QString("%1:pic:").arg(otherclientmsg);
    pic.append(data.toUtf8());
    pic.append(buf);
    mysock.write(pic);
}
//每隔一秒钟获取一次系统日期和时间
void MainWindow::getTime()
{
    QDate mydate = QDate::currentDate();
    QTime mytime = QTime::currentTime();
    QString allTime = QString("%1 %2").arg(mydate.toString("yyyy-MM-dd")).arg(mytime.toString("hh:mm:ss"));
    ui->time->setText(allTime);
}
// 获取天气
void MainWindow::getWeather(QNetworkReply *reply)
{
    QString weather;
    //读取服务器回复的应答信息
    QByteArray buf = reply->readAll(); //buf里面存放就是从网上获取的天气预报信息(json数据)
    //定义json解析错误对象
    QJsonParseError err;
    //把网络上得到的json标准化存储
    //{"weatherinfo":{"city":"北京","cityid":"101010100","temp1":"18℃","temp2":"31℃","weather":"多云转阴","img1":"n1.gif","img2":"d2.gif","ptime":"18:00"}}
    QJsonDocument mydoc=QJsonDocument::fromJson(buf,&err);
    //判断要解析的json数据是否合法
    if(err.error!=QJsonParseError::NoError)
    {
        qDebug()<<"json数据有问题: "<<err.errorString();
        return;
    }

    //剥洋葱，一步步解析json
    //obj里面"weatherinfo":{"city":"北京","cityid":"101010100","temp1":"18℃","temp2":"31℃","weather":"多云转阴","img1":"n1.gif","img2":"d2.gif","ptime":"18:00"}
    QJsonObject obj=mydoc.object();
    //再解析得到weatherinfo对应的值
    //此时返回值就是{"city":"北京","cityid":"101010100","temp1":"18℃","temp2":"31℃","weather":"多云转阴","img1":"n1.gif","img2":"d2.gif","ptime":"18:00"}
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
// 发送请求
void MainWindow::sendRequest()
{
    QString path = "http://www.weather.com.cn/data/cityinfo/101280101.html";
    //定义请求对象
    QUrl url(path);
    QNetworkRequest req(url);
    //发送该请求给服务器
    manager.get(req);

}
// 退出登录
void MainWindow::on_logout_clicked()
{
    mysock.disconnectFromHost();
    //得到上一级窗口，并显示
    this->parentWidget()->show();
    //当前主窗口关闭
    delete this;
}
//接收服务器的信息
void MainWindow::recvFun()
{
    QByteArray buf = mysock.readAll();
    //对接收的信息进行拆分
    QString str(buf);
    qDebug()<<"收到服务器的信息是: "<<str;
    //判断客户端收到的信息
    if(str.contains("@")) //包含@--》说明是第一种类型的消息
    {
        ui->listWidget->clear();
        QStringList clientlist = str.split("@");
        //在listwidget中显示出来
        for(int i=0; i<clientlist.size(); i++)
        {
            if((clientlist.at(i)).contains(QString::number(port)))
                continue;
            ui->listWidget->addItem(clientlist.at(i));
        }
    }
    else //不包含@--》说明是第二种类型的消息
    {
        QStringList msglist = str.split(":");
        qDebug()<<msglist.at(0);
        // 收到的是文字
        if(msglist.at(0) == "msg")
        {
            qDebug()<<"text";
            QString msg = msglist.at(1);
            if(sendDialog != NULL)
                sendDialog->getSend(msg.toUtf8());
        }
        else
        {
            // 收到的是表情
            qsrand(time(NULL)); //产生随机数种子
            int num = qrand() % 100000;
            QString path = QString("./data/pic/%1.jpg").arg(num);
            //新建一个空白的jpg文件
            QFile myfile(path);
            myfile.open(QIODevice::ReadWrite|QIODevice::Truncate);
            //把接收到的表情包数据写入到空白的jpg文件中
            myfile.write(buf);
            //关闭文件
            myfile.close();

            if(sendDialog != NULL)
                sendDialog->getPic(path);
        }
    }
}
//连接服务器
void MainWindow::on_link_clicked()
{
    //获取你输入的服务器ip和端口号
    QString ipbuf = ui->ip->text();
    QString portbuf = ui->port->text();
    mysock.connectToHost(QHostAddress(ipbuf),portbuf.toShort());
    if(mysock.error() == QAbstractSocket::ConnectionRefusedError)
        QMessageBox::warning(this,"Warning","连接超时");
}
//刷新好友按钮
void MainWindow::on_pushButton_clicked()
{
    if(mysock.error() == QAbstractSocket::ConnectionRefusedError)
    {
        QMessageBox::warning(this,"Warning","连接超时");
        return;
    }

    //给服务器发送getlist
    mysock.write("getlist");
}
//双击某个列表项，表示你想跟这个客户端聊天
void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    //获取你双击的这个列表项里面的内容(ip和端口号)
    otherclientmsg.clear();
    otherclientmsg = item->text();
    // 显示聊天窗口
    sendDialog = new SendDialog(this);
    connect(sendDialog, SIGNAL(sendData(QString)), this, SLOT(sendServer(QString)));
    connect(sendDialog, SIGNAL(sendPic(QByteArray)), this, SLOT(sendPicServer(QByteArray)));
    sendDialog->show();
}

