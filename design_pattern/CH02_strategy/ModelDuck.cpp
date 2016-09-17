#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "Quack.h"

#include <iostream>
using namespace std;

ModelDuck::ModelDuck(void)
{
    quackBehavior = new Quack();
    flyBehavior = new FlyNoWay();
}

ModelDuck::~ModelDuck(void)
{
    delete flyBehavior;
    delete quackBehavior;
}

void ModelDuck::display()
{
    cout << "I'm a model duck" << endl;
}
