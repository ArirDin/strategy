#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Duck *d4 = new MallardDuck();
    d4->display();
    d4->quack();

    return a.exec();
}
