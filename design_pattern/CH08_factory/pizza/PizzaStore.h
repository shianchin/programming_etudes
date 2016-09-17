#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "SimplePizzaFactory.h"
#include <string>
using namespace std;

class PizzaStore
{
public:
    PizzaStore(SimplePizzaFactory* factory);
    Pizza* orderPizza(string type);

private:
    SimplePizzaFactory* factory;
};

#endif
