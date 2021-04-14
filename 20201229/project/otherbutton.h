#ifndef OTHERBUTTON_H
#define OTHERBUTTON_H

#include <QPushButton>

class otherbutton : public QPushButton
{
    Q_OBJECT
public:
    explicit otherbutton(QWidget *parent = 0);

signals:

public slots:
    void fun();

public slots:
};

#endif // OTHERBUTTON_H
