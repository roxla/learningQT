#ifndef SPECIALBUTTON_H
#define SPECIALBUTTON_H

#include <QPushButton>

class specialbutton : public QPushButton
{
    Q_OBJECT
public:
    explicit specialbutton(QWidget *parent = 0);

signals:

public slots:
    void fun();
};

#endif // SPECIALBUTTON_H
