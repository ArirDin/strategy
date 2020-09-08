#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Duck *d1 = new MallardDuck();
    d1->display();
    d1->quack();

    return a.exec();
}
