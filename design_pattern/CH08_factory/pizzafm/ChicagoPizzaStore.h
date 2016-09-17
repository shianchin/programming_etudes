#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H

#include "Pizza.h"
#include "PizzaStore.h"
#include <string>
using namespace std;

class ChicagoPizzaStore : public PizzaStore
{
public:
    Pizza* createPizza(string item);
};

#endif
