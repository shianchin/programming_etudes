#include "ChicagoPizzaStore.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStylePepperoniPizza.h"
#include "ChicagoStyleVeggiePizza.h"

Pizza* ChicagoPizzaStore::createPizza(string item)
{
    Pizza* pizza = NULL;

    if (item=="cheese")
    {
        pizza = new ChicagoStyleCheesePizza();
    }
    else if (item=="veggie")
    {
        pizza = new ChicagoStyleVeggiePizza();
    }
    else if (item=="clam")
    {
        pizza = new ChicagoStyleClamPizza();
    }
    else if (item=="pepperoni")
    {
        pizza = new ChicagoStylePepperoniPizza();
    }
    return pizza;
}
