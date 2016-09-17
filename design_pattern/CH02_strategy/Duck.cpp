#include "Duck.h"
#include <iostream>
using namespace std;

Duck::Duck(void)
{

}

void Duck::setFlyBehavior(FlyBehavior* fb)
{
    flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb)
{
    quackBehavior = qb;
}

void Duck::performFly()
{
    flyBehavior->fly();
}

void Duck::performQuack()
{
    quackBehavior->quack();
}

void Duck::swim()
{
    cout << "All ducks float, even decoys!" << endl;
}
