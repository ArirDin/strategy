#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "quackbehavior.h"
#include "flybehavior.h"
#include "quack.h"
#include "flywithwings.h"
#include "mutequack.h"
#include "flynoway.h"
#include "squeak.h"
#include "flyrocketpowered.h"

using namespace std;

class Duck
{
public:
    FlyBehavior *flybehavior;
    QuackBehavior *quackbehavior;

    void performFly();
    void performQuack();

    void setFlyBhavior();
    void setQuackBehavior();

    void swim();
    virtual void display() = 0;
};

#endif // DUCK_H
