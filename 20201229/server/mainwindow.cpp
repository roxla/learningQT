#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //修改主窗口的标题
    this->setWindowTitle("服务器窗口");
    allclientmsg.clear();
    //绑定服务器自己的ip和端口，顺便监听
    myserver.listen(QHostAddress("192.168.19.45"), 10001);
    //关联newConnection信号
    connect(&myserver,SIGNAL(newConnection()),this,SLOT(linkFun()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
//说明有信息的客户端连接服务器
void MainWindow::linkFun()
{
    p = myserver.nextPendingConnection();
    // 关联readyRead信号
    connect(p,SIGNAL(readyRead()),this,SLOT(recvclient()));
    connect(p,SIGNAL(disconnected()),this,SLOT(rmclient()));
    // 把这个套接字存放到容器中
    mylist.append(p);
    // 获取目前连接成功的客户端的ip和端口号
    QHostAddress addr = p->peerAddress();
    quint16 someport = p->peerPort();
    QString msg=QString("%1:%2").arg(addr.toString()).arg(someport);
    qDebug()<<"有客户端连接成功了,它ip和端口号是: "<<msg;

    //立马把这个连接成功的客户端信息存放到allclientmsg这个字符串中
    allclientmsg.append(msg);
    allclientmsg.append("@");
    //在listwidget中把客户端信息显示出来
    ui->listWidget->addItem(msg);
}
//接收客户端信息的槽函数
void MainWindow::recvclient()
{
    //获取信号的发送者
    QTcpSocket *sock=qobject_cast<QTcpSocket *>(sender());
    //读取这个客户端发送过来的信息
    QByteArray buf = sock->readAll();
    QString str(buf);
    qDebug()<<"服务器收到的信息是: "<<str;
    if(str=="getlist") //说明客户端想要获取在线客户端信息
    {
        sock->write(allclientmsg.toUtf8());
    }
    else //其他类型的消息
    {
        //拆分字符串，然后判断客户端发给我(服务器)，究竟想要我(服务器)干什么
        QStringList msglist=str.split(":"); //msglist.at(0) -->ip地址
                                            //msglist.at(1) -->端口
                                            //msglist.at(2) -->消息类型
                                            //msglist.at(3) -->真实的信息
//        qDebug()<<"拆分出来: "<<msglist.at(0)<<"  "<<msglist.at(1);
        //遍历容器，找到目标主机对应的套接字
        for(i=0; i < mylist.size(); i++)
        {
            QString ipbuf = mylist.at(i)->peerAddress().toString();
            quint16 someport = mylist.at(i)->peerPort();
//            qDebug()<<"遍历容器："<<ipbuf<<"  "<<someport;
            //跟双击的列表项比对，是否一致
            if(ipbuf==msglist.at(0) && someport==msglist.at(1).toInt())
            {
                if(msglist.at(2) == "msg")
                {
                    //发送给这个目标主机
                    QString msg = QString("msg:%1").arg(msglist.at(3));
                    mylist.at(i)->write(msg.toUtf8());
                }
                else if(msglist.at(2) == "pic")
                {
                    QString type = QString("%1:%2:pic:").arg(ipbuf).arg(someport);
                    QByteArray pic = buf.remove(0,type.size());
                    qDebug()<<pic;
                    mylist.at(i)->write(pic);
                }
                break;
            }
        }
    }
}
//槽函数用来删除断开连接的客户端
void MainWindow::rmclient()
{
    qDebug()<<1;
    //获取信号的发送者
    QTcpSocket *sock=qobject_cast<QTcpSocket *>(sender());
    qDebug()<<"有客户端断开了";
    //从容器里面删除
    mylist.removeOne(sock);
    //从listwidget删除刚才断开的客户端
    //从listwidget中找到要删除的客户端
    QString str = QString("%1:%2").arg(sock->peerAddress().toString()).arg(sock->peerPort());
    QList<QListWidgetItem *> result = ui->listWidget->findItems(str,Qt::MatchStartsWith);
    //获取行号
    int r = ui->listWidget->row(result.at(0));
    //从listwiget中删除找到的结果
    //result.at(0)
    ui->listWidget->takeItem(r);
    // 删除allclientmsg中的内容
    int i = allclientmsg.indexOf(str);
    allclientmsg.remove(i,str.size()+1);

    qDebug()<<allclientmsg;
}
