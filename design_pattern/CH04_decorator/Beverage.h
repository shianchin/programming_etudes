#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
using namespace std;

class Beverage
{
public:
    Beverage();
    virtual string getDescription();
    virtual double cost()=0;

protected:
    string description;
};

#endif
