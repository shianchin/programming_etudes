#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"

#include <iostream>
using namespace std;

MallardDuck::MallardDuck(void)
{
    quackBehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

MallardDuck::~MallardDuck(void)
{
    delete flyBehavior;
    delete quackBehavior;
}

void MallardDuck::display()
{
    cout << "I'm a real Mallard duck" << endl;
}
