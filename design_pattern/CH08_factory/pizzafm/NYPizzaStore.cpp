#include "NYPizzaStore.h"
#include "NYStyleClamPizza.h"
#include "NYStyleCheesePizza.h"
#include "NYStylePepperoniPizza.h"
#include "NYStyleVeggiePizza.h"

Pizza* NYPizzaStore::createPizza(string item)
{
    Pizza* pizza = NULL;

    if (item=="cheese")
    {
        pizza = new NYStyleCheesePizza();
    }
    else if (item=="veggie")
    {
        pizza = new NYStyleVeggiePizza();
    }
    else if (item=="clam")
    {
        pizza = new NYStyleClamPizza();
    }
    else if (item=="pepperoni")
    {
        pizza = new NYStylePepperoniPizza();
    }
    return pizza;
}
