#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include <string>
using namespace std;

class PizzaStore
{
public:
    virtual Pizza* createPizza(string item)=0;
    Pizza* orderPizza(string type);
};

#endif
