#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "Pizza.h"
#include <string>
using namespace std;

class SimplePizzaFactory
{
public:
    Pizza* createPizza(string type);
};

#endif
