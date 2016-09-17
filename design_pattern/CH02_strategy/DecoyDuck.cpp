#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"

#include <iostream>
using namespace std;

DecoyDuck::DecoyDuck(void)
{
    setQuackBehavior(new MuteQuack());
    setFlyBehavior(new FlyNoWay());
}

DecoyDuck::~DecoyDuck(void)
{
    delete flyBehavior;
    delete quackBehavior;
}

void DecoyDuck::display()
{
    cout << "I'm a duck Decoy" << endl;
}
