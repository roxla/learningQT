#include "otherbutton.h"
#include <QDebug>
#include <QKeyEvent>
#include <QCoreApplication>
#include <QApplication>

otherbutton::otherbutton(QWidget *parent) : QPushButton(parent)
{
    //关联click信号和自定义的槽函数
    connect(this,SIGNAL(clicked(bool)),this,SLOT(fun()));
}

void otherbutton::fun()
{
    //获取信号的发送者
    otherbutton *p = qobject_cast<otherbutton *>(sender());
    //按键的字面值
    QString str = p->text();
    QKeyEvent *keyevent;
    if(str == "Space")  //空格键
    {
        //第一步：自定义按键事件
        keyevent = new QKeyEvent(QEvent::KeyPress,Qt::Key_Space,Qt::NoModifier," ");
    }
    else if(str == "En") //回车键
    {
        keyevent = new QKeyEvent(QEvent::KeyPress,Qt::Key_Enter,Qt::NoModifier,str);
    }
    else if(str == "←") //退格键
    {
        keyevent = new QKeyEvent(QEvent::KeyPress,Qt::Key_Backspace,Qt::NoModifier,str);
    }
    else
    {
        keyevent = new QKeyEvent(QEvent::KeyPress,str.toInt()+48,Qt::NoModifier,str);
    }
    //第二步：把这个事件自己主动调用sendEvent(输入框,按键事件)发送出去
    //QT中有个函数可以获取鼠标光标进入的组件
    QCoreApplication::sendEvent(QApplication::focusWidget(),keyevent);
}
