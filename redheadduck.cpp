#include "redheadduck.h"

RedheadDuck::RedheadDuck()
{
    quackbehavior = new Quack();
    flybehavior = new FlyWithWings();
}

void RedheadDuck::display() {
    cout << "I'm a Redhead duck" << endl;
}
