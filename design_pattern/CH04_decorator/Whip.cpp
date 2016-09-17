#include "Whip.h"

Whip::Whip(Beverage* beverage)
{
    this->beverage = beverage;
}

string Whip::getDescription()
{
    return (beverage->getDescription() + ", Whip");
}

double Whip::cost()
{
    return (.10 + beverage->cost());
}

