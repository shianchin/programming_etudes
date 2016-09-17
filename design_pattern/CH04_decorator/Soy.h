#ifndef SOY_H
#define SOY_H

#include "CondimentDecorator.h"
#include "Beverage.h"
#include <string>
using namespace std;

class Soy : public CondimentDecorator
{
public:
    Soy(Beverage* beverage);
    string getDescription();
    double cost();

private:
    Beverage* beverage;
};

#endif
