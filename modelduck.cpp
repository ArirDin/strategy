#include "modelduck.h"

ModelDuck::ModelDuck()
{

    quackbehavior = new Quack();
    flybehavior = new FlyRocketPowered();

}

void ModelDuck::display() {
    cout << "I'm a Model duck" << endl;
}
