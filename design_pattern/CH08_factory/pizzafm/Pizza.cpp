#include "Pizza.h"

#include <iostream>
using namespace std;

void Pizza::prepare()
{
    cout << "Preparing " << name << endl
         << "Tossing dough...\n"
         << "Adding sauce...\n"
         << "Adding toppings: \n";
    for (int i = 0; i < toppings.size(); i++)
    {
        cout << "   " << toppings[i] << "\n";
    }
}

void Pizza::bake()
{
    cout << "Bake for 25 minutes at 350" << endl;
}

void Pizza::cut()
{
    cout << "Cut the pizza into diagonal slices" << endl;
}

void Pizza::box()
{
    cout << "Place pizza in official PizzaStore box" << endl;
}

string Pizza::getName()
{
    return name;
}

ostream& operator<<(ostream &output, const Pizza &piz)
{
    // code to display pizza name and ingredients
    output << "---- " << piz.name << " ----\n"
           << piz.dough << "\n"
           << piz.sauce << "\n";
    for (int i = 0; i < piz.toppings.size(); i++)
    {
        output << piz.toppings[i] << "\n";
    }
    return output;
}
