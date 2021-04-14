#include "normalbutton.h"
#include <QDebug>
#include <QKeyEvent>
#include <QCoreApplication>
#include <QApplication>

bool flag = false;

normalbutton::normalbutton(QWidget *parent) : QPushButton(parent)
{
    //关联click信号和自定义的槽函数
    connect(this,SIGNAL(clicked(bool)),this,SLOT(fun()));
}

void normalbutton::fun()
{
    //获取信号的发送者
    normalbutton *p = qobject_cast<normalbutton *>(sender());
    //按键的字面值，比如是Q
    QString str = p->text(); // "Q"

    if(str == "Cap")
    {
        flag = !flag;
        if(flag)
        {
            // 大写
            this->setStyleSheet("background-color:rgb(255,0,0);");
        }
        else
        {
            // 小写
            this->setStyleSheet("");
        }
    }
    else
    {
        if(flag)
        {
            //目前软键盘中所有的按钮只要被点击，都会调用fun
            //根据讲解的事件派发流程
            //第一步：自定义按键事件
            QKeyEvent *keyevent=new QKeyEvent(QEvent::KeyPress,str.toInt(),Qt::NoModifier,str);
            //第二步：把这个事件自己主动调用sendEvent(输入框,按键事件)发送出去
            //QT中有个函数可以获取鼠标光标进入的组件
            QCoreApplication::sendEvent(QApplication::focusWidget(),keyevent);
        }
        else
        {
            //目前软键盘中所有的按钮只要被点击，都会调用fun
            //根据讲解的事件派发流程
            //第一步：自定义按键事件
            QKeyEvent *keyevent=new QKeyEvent(QEvent::KeyPress,str.toInt(),Qt::NoModifier,str.toLower());
            //第二步：把这个事件自己主动调用sendEvent(输入框,按键事件)发送出去
            //QT中有个函数可以获取鼠标光标进入的组件
            QCoreApplication::sendEvent(QApplication::focusWidget(),keyevent);
        }
    }
}

