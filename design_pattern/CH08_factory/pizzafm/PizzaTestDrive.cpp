#include <iostream>
using namespace std;

#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"
#include "PizzaStore.h"

int main()
{
    cout << "design pattern - factory!\n";

    PizzaStore* nyStore = new NYPizzaStore();
    PizzaStore* chicagoStore = new ChicagoPizzaStore();

    Pizza* pizza = nyStore->orderPizza("cheese");
    cout << "Ethan ordered a " << pizza->getName() << endl;

    pizza = chicagoStore->orderPizza("cheese");
    cout << "Joel ordered a " << pizza->getName() << endl;

    pizza = nyStore->orderPizza("clam");
    cout << "Ethan ordered a " << pizza->getName() << endl;

    pizza = chicagoStore->orderPizza("clam");
    cout << "Joel ordered a " << pizza->getName() << endl;

    pizza = nyStore->orderPizza("pepperoni");
    cout << "Ethan ordered a " << pizza->getName() << endl;

    pizza = chicagoStore->orderPizza("pepperoni");
    cout << "Joel ordered a " << pizza->getName() << endl;

    pizza = nyStore->orderPizza("veggie");
    cout << "Ethan ordered a " << pizza->getName() << endl;

    pizza = chicagoStore->orderPizza("veggie");
    cout << "Joel ordered a " << pizza->getName() << endl;

    delete pizza;
    delete chicagoStore;
    delete nyStore;
    return 0;
}
