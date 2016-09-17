#include <iostream>
using namespace std;

#include "SimplePizzaFactory.h"
#include "PizzaStore.h"

int main()
{
    cout << "design pattern - factory!\n";

    SimplePizzaFactory* factory = new SimplePizzaFactory();
    PizzaStore* store = new PizzaStore(factory);

    Pizza* pizza = store->orderPizza("cheese");
    cout << "We ordered a " << pizza->getName() << endl;
    cout << *pizza;

    pizza = store->orderPizza("veggie");
    cout << "We ordered a " << pizza->getName() << endl;
    cout << *pizza;

    delete pizza;
    delete store;
    delete factory;
    return 0;
}
