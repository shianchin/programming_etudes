#include "RubberDuck.h"
#include "FlyNoWay.h"
#include "Squeak.h"

#include <iostream>
using namespace std;

RubberDuck::RubberDuck(void)
{
    quackBehavior = new Squeak();
    flyBehavior = new FlyNoWay();
}

RubberDuck::~RubberDuck(void)
{
    delete flyBehavior;
    delete quackBehavior;
}

void RubberDuck::display()
{
    cout << "I'm a rubber duckie" << endl;
}
