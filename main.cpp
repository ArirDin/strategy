#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"
#include "rubberduck.h"
#include "decoyduck.h"
#include "modelduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Duck *d1 = new MallardDuck();
    d1->display();
    d1->performQuack();
    d1->performFly();
    cout << "------------------------" << endl;
    Duck *d2 = new RedheadDuck();
    d2->display();
    d2->performQuack();
    d2->performFly();
    cout << "------------------------" << endl;
    Duck *d3 = new RubberDuck();
    d3->display();
    d3->performQuack();
    d3->performFly();
    cout << "------------------------" << endl;
    Duck *d4 = new DecoyDuck();
    d4->display();
    d4->performQuack();
    d4->performFly();
    cout << "------------------------" << endl;
    Duck *d5 = new ModelDuck();
    d5->display();
    d5->performQuack();
    d5->performFly();

    return a.exec();
}
