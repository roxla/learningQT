#include "mylineedit.h"

MyLineEdit::MyLineEdit(QWidget *parent) : QLineEdit(parent)
{

}

void MyLineEdit::focusInEvent(QFocusEvent *e)
{
    this->setReadOnly(false);
    this->setFocus();
}

void MyLineEdit::focusOutEvent(QFocusEvent *e)
{
    this->clearFocus();
    this->setReadOnly(true);
    qDebug()<<this->text();
}
