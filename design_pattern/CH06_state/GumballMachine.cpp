#include "GumballMachine.h"
#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "SoldState.h"
#include "State.h"
#include <iostream>
using namespace std;

GumballMachine::GumballMachine(int numberGumballs)
    : count(0)
{
    soldOutState = new SoldOutState(this);
    state = soldOutState;
    noQuarterState = new NoQuarterState(this);
    hasQuarterState = new HasQuarterState(this);
    soldState = new SoldState(this);

    this->count = numberGumballs;
    if (numberGumballs > 0)
    {
        state = noQuarterState;
    }
}

void GumballMachine::insertQuarter()
{
    state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
    state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
    state->turnCrank();
    state->dispense();
}

void GumballMachine::releaseBall()
{
    cout << "A gumball comes rolling out the slot..." << endl;
    if (count != 0)
    {
        count = count - 1;
    }
}

int GumballMachine::getCount()
{
    return count;
}

void GumballMachine::refill(int count)
{
    this->count = count;
    state = noQuarterState;
}

void GumballMachine::setState(State* state)
{
    this->state = state;
}

State* GumballMachine::getState()
{
    return state;
}

State* GumballMachine::getSoldOutState()
{
    return soldOutState;
}

State* GumballMachine::getNoQuarterState()
{
    return noQuarterState;
}

State* GumballMachine::getHasQuarterState()
{
    return hasQuarterState;
}

State* GumballMachine::getSoldState()
{
    return soldState;
}

ostream& operator<<(ostream &output, const GumballMachine &gm)
{
    output << "\nMighty Gumball, Inc."
           << "\nC++ enabled Standing Gumball Model #2016"
           << "\nInventory: " << gm.count << " gumball";
    if (gm.count != 1)
    {
        output << "s";
    }
    output << "\nMachine is ";
    gm.state->print();
    return output;
}

