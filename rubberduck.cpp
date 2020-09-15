#include "rubberduck.h"

RubberDuck::RubberDuck()
{
    quackbehavior = new Squeak();
    flybehavior = new FlyNoWay();
}

void RubberDuck::display() {
    cout << "I'm a Rubber duck" << endl;
}
