#ifndef MOCHA_H
#define MOCHA_H

#include "CondimentDecorator.h"
#include "Beverage.h"
#include <string>
using namespace std;

class Mocha : public CondimentDecorator
{
public:
    Mocha(Beverage* beverage);
    string getDescription();
    double cost();

private:
    Beverage* beverage;
};

#endif
