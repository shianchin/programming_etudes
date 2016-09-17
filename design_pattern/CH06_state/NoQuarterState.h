#ifndef NOQUARTERSTATE_H
#define NOQUARTERSTATE_H

#include "GumballMachine.h"
#include "State.h"
#include <iostream>
using namespace std;

class NoQuarterState : public State
{
public:
    NoQuarterState(GumballMachine* gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    void print();

private:
    GumballMachine* gumballMachine;
};

#endif
