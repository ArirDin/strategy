#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"
#include "rubberduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Duck *d1 = new MallardDuck();
    d1->display();
    d1->quack();
    d1->fly();

    Duck *d2 = new RedheadDuck();
    d2->display();
    d2->quack();
    d2->fly();

    Duck *d3 = new RubberDuck();
    d3->display();
    d3->quack();
    d3->fly();

    return a.exec();
}
