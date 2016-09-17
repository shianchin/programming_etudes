#include "Soy.h"

Soy::Soy(Beverage* beverage)
{
    this->beverage = beverage;
}

string Soy::getDescription()
{
    return (beverage->getDescription() + ", Soy");
}

double Soy::cost()
{
    return (.15 + beverage->cost());
}

