#ifndef SOLDOUTSTATE_H
#define SOLDOUTSTATE_H

#include "GumballMachine.h"
#include "State.h"
#include <iostream>
using namespace std;

class SoldOutState : public State
{
public:
    SoldOutState(GumballMachine* gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    void print();

private:
    GumballMachine* gumballMachine;
};

#endif
