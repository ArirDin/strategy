#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Duck *d3 = new MallardDuck();
    d3->display();
    d3->quack();

    return a.exec();
}
