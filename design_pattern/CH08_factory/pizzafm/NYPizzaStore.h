#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H

#include "Pizza.h"
#include "PizzaStore.h"
#include <string>
using namespace std;

class NYPizzaStore : public PizzaStore
{
public:
    Pizza* createPizza(string item);
};

#endif
