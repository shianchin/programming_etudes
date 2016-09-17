#ifndef MILK_H
#define MILK_H

#include "CondimentDecorator.h"
#include "Beverage.h"
#include <string>
using namespace std;

class Milk : public CondimentDecorator
{
public:
    Milk(Beverage* beverage);
    string getDescription();
    double cost();

private:
    Beverage* beverage;
};

#endif
