#ifndef WHIP_H
#define WHIP_H

#include "CondimentDecorator.h"
#include "Beverage.h"
#include <string>
using namespace std;

class Whip : public CondimentDecorator
{
public:
    Whip(Beverage* beverage);
    string getDescription();
    double cost();

private:
    Beverage* beverage;
};

#endif
