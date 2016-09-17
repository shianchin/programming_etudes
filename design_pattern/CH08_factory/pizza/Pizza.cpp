#include "Pizza.h"

#include <iostream>
using namespace std;

string Pizza::getName()
{
    return name;
}

void Pizza::prepare()
{
    cout << "Preparing " << name << endl;
}

void Pizza::bake()
{
    cout << "Baking " << name << endl;
}

void Pizza::cut()
{
    cout << "Cutting " << name << endl;
}

void Pizza::box()
{
    cout << "Boxing " << name << endl;
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
