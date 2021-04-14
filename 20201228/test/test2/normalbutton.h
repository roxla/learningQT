#ifndef NORMALBUTTON_H
#define NORMALBUTTON_H

#include <QPushButton>

class normalbutton : public QPushButton
{
    Q_OBJECT
public:
    explicit normalbutton(QWidget *parent = 0);

signals:

public slots:
    void fun();

private:

};

#endif // NORMALBUTTON_H
