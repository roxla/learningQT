#include "carbutton.h"

// 卡号
extern unsigned int cardid;
// 出车标志位
extern bool carOut;
// 已用车位
extern int carUser;
// 数据库
extern QSqlDatabase carbase;

CarButton::CarButton(QWidget *parent) : QPushButton(parent)
{
    //关联click信号和自定义的槽函数
    connect(this,SIGNAL(clicked(bool)),this,SLOT(fun()));
}

void CarButton::fun()
{
    //获取信号的发送者
    if(cardid != 0 && !carOut)
    {
        CarButton *p = qobject_cast<CarButton *>(sender());
        if(p->icon().isNull())
        {
            // 数据库操作
            QDateTime i_time = QDateTime::currentDateTime();   //获取当前时间
            uint timeT = i_time.toTime_t();
            QString cmd = QString("update cartable set time=%1,park=\"%2\" where cardid=\"%3\";").arg(timeT).arg(p->objectName()).arg(cardid,0,16);
            //数据库对象给操作数据库的对象(query)绑定在一起
            QSqlQuery query(carbase);
            bool ret = query.exec(cmd);
            if(!ret)
            {
                qDebug()<<query.lastError().text();
                return;
            }
            // 设置图标等
            p->setIcon(QIcon(":/new/prefix1/car.png"));
            carUser++;
            carOut = true;
            cardid = 0;
        }
        else
        {
            QMessageBox::warning(this,"warning","该车位已被使用");
        }
    }
    else
    {
        QMessageBox::warning(this,"warning","请先刷卡");
    }
}
