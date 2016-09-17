#include "MallardDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

#include <iostream>
using namespace std;

int main()
{
    cout << "design pattern - strategy!\n";

    MallardDuck* mallard = new MallardDuck();
    RubberDuck* rubberDuckie = new RubberDuck();
    DecoyDuck* decoy = new DecoyDuck();
    ModelDuck* model = new ModelDuck();
    mallard->performQuack();
    rubberDuckie->performQuack();
    decoy->performQuack();

    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered());
    model->performFly();

    delete mallard;
    delete rubberDuckie;
    delete decoy;
    delete model;

    return 0;
}
