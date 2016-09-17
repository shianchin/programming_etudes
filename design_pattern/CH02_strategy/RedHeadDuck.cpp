#include "RedHeadDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"

#include <iostream>
using namespace std;

RedHeadDuck::RedHeadDuck(void)
{
    quackBehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

RedHeadDuck::~RedHeadDuck(void)
{
    delete flyBehavior;
    delete quackBehavior;
}

void RedHeadDuck::display()
{
    cout << "I'm a real Red Headed duck" << endl;
}
