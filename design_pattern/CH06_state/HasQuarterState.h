#ifndef HASQUARTERSTATE_H
#define HASQUARTERSTATE_H

#include "GumballMachine.h"
#include "State.h"
#include <iostream>
using namespace std;

class HasQuarterState : public State
{
public:
    HasQuarterState(GumballMachine* gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    void print();

private:
    GumballMachine* gumballMachine;
};

#endif
