#include "specialbutton.h"
#include <QDebug>
#include <QKeyEvent>
#include <QCoreApplication>
#include <QApplication>

specialbutton::specialbutton(QWidget *parent) : QPushButton(parent)
{
    //关联click信号和自定义的槽函数
    connect(this,SIGNAL(clicked(bool)),this,SLOT(fun()));
}

void specialbutton::fun()
{
    //获取信号的发送者
    specialbutton *p = qobject_cast<specialbutton *>(sender());
    //按键的字面值
    QString str = p->text();
    QKeyEvent *keyevent;
    if(str == "+")
        keyevent = new QKeyEvent(QEvent::KeyPress,Qt::Key_Plus,Qt::NoModifier,str);
    else if(str == "-")
        keyevent = new QKeyEvent(QEvent::KeyPress,Qt::Key_Minus,Qt::NoModifier,str);
    else if(str == "=")
        keyevent = new QKeyEvent(QEvent::KeyPress,Qt::Key_Equal,Qt::NoModifier,str);
    else if(str == "*")
        keyevent = new QKeyEvent(QEvent::KeyPress,Qt::Key_Asterisk,Qt::NoModifier,str);
    else if(str == ";")
        keyevent = new QKeyEvent(QEvent::KeyPress,Qt::Key_Semicolon,Qt::NoModifier,str);
    else if(str == ",")
        keyevent = new QKeyEvent(QEvent::KeyPress,Qt::Key_Comma,Qt::NoModifier,str);
    else if(str == ".")
        keyevent = new QKeyEvent(QEvent::KeyPress,Qt::Key_Period,Qt::NoModifier,str);
    else if(str == "/")
        keyevent = new QKeyEvent(QEvent::KeyPress,Qt::Key_Slash,Qt::NoModifier,str);
    else if(str == "'")
        keyevent = new QKeyEvent(QEvent::KeyPress,Qt::Key_QuoteDbl,Qt::NoModifier,str);

    //QT中有个函数可以获取鼠标光标进入的组件
    QCoreApplication::sendEvent(QApplication::focusWidget(),keyevent);
}
