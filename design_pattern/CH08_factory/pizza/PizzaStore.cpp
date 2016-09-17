#include "Pizza.h"
#include "PizzaStore.h"

PizzaStore::PizzaStore(SimplePizzaFactory* factory)
{
    this->factory = factory;
}

Pizza* PizzaStore::orderPizza(string type)
{
    Pizza* pizza;

    pizza = factory->createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}
