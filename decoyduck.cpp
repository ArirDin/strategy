#include "decoyduck.h"

DecoyDuck::DecoyDuck()
{
    quackbehavior = new MuteQuack();
    flybehavior = new FlyNoWay();
}

void DecoyDuck::display() {
    cout << "I'm a Decoy duck" << endl;
}
