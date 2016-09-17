#ifndef STATE_H
#define STATE_H

#include <iostream>
using namespace std;

class State
{
public:
    virtual void insertQuarter()=0;
    virtual void ejectQuarter()=0;
    virtual void turnCrank()=0;
    virtual void dispense()=0;
    virtual void print()=0;
};

#endif
