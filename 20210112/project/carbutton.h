#ifndef CARBUTTON_H
#define CARBUTTON_H

#include <QPushButton>
#include "myhead.h"

class CarButton : public QPushButton
{
    Q_OBJECT
public:
    explicit CarButton(QWidget *parent = 0);

public slots:
    void fun();

};

#endif // CARBUTTON_H
