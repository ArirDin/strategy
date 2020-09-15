#include "mallardduck.h"

MallardDuck::MallardDuck()
{

    quackbehavior = new Quack();
    flybehavior = new FlyWithWings();

}

void MallardDuck::display() {
    cout << "I'm a Mallard duck" << endl;
}
