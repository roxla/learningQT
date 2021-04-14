#ifndef SOLFKEY_H
#define SOLFKEY_H

#include <QWidget>

namespace Ui {
class solfkey;
}

class solfkey : public QWidget
{
    Q_OBJECT

public:
    explicit solfkey(QWidget *parent = 0);
    ~solfkey();

private:
    Ui::solfkey *ui;
};

#endif // SOLFKEY_H
