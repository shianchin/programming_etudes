#include "HasQuarterState.h"

#include <iostream>
using namespace std;

HasQuarterState::HasQuarterState(GumballMachine* gumballMachine)
{
    this->gumballMachine = gumballMachine;
}

void HasQuarterState::insertQuarter()
{
    cout << "You can't insert another quarter" << endl;
}

void HasQuarterState::ejectQuarter()
{
    cout << "Quarter returned" << endl;
    gumballMachine->setState(gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
    cout << "You turned..." << endl;
    gumballMachine->setState(gumballMachine->getSoldState());
}

void HasQuarterState::dispense()
{
    cout << "No gumball dispensed" << endl;
}

void HasQuarterState::print()
{
    cout << "waiting for turn of crank" << endl;
}
