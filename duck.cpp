#include "duck.h"

void Duck::performQuack() {
    quackbehavior->quack();
}

void Duck::swim() {
    cout << "swim" << endl;
}

void Duck::performFly() {
    flybehavior->fly();
}
/*
void Duck::setFlyBhavior() {
    flybehavior = fb;
}

void Duck::setQuackBehavior() {
   quackbehavior = qb;
}
*/
