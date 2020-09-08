#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Duck *d1 = new MallardDuck();
    d1->display();
    d1->quack();

    Duck *d2 = new MallardDuck();
    d2->display();
    d2->quack();
    d2->swim();

    return a.exec();
}
