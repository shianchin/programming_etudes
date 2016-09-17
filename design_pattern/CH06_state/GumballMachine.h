#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include "State.h"
#include <iostream>
using namespace std;

class GumballMachine
{
public:
    GumballMachine(int numberGumballs);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void releaseBall();
    int getCount();
    void refill(int count);
    void setState(State* state);
    State* getState();
    State* getSoldOutState();
    State* getNoQuarterState();
    State* getHasQuarterState();
    State* getSoldState();
    friend ostream& operator<<(ostream &output, const GumballMachine &gm);

protected:
    State* soldOutState;
    State* noQuarterState;
    State* hasQuarterState;
    State* soldState;
    State* state;
    int count;
};

#endif
