#include "loginwin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Loginwin w;
    w.show();

    return a.exec();
}
