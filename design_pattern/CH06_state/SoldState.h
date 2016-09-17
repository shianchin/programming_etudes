#ifndef SOLDSTATE_H
#define SOLDSTATE_H

#include "GumballMachine.h"
#include "State.h"
#include <iostream>
using namespace std;

class SoldState : public State
{
public:
    SoldState(GumballMachine* gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    void print();

private:
    GumballMachine* gumballMachine;
};

#endif
