#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "Beverage.h"
#include <string>
using namespace std;

class CondimentDecorator : public Beverage
{
public:
    virtual string getDescription()=0;
};

#endif
