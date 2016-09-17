#include "NoQuarterState.h"

#include <iostream>
using namespace std;

NoQuarterState::NoQuarterState(GumballMachine* gumballMachine)
{
    this->gumballMachine = gumballMachine;
}

void NoQuarterState::insertQuarter()
{
    cout << "You inserted a quarter" << endl;
    gumballMachine->setState(gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
    cout << "You haven't inserted a quarter" << endl;
}

void NoQuarterState::turnCrank()
{
    cout << "You turned, but there's no quarter" << endl;
}

void NoQuarterState::dispense()
{
    cout << "You need to pay first" << endl;
}

void NoQuarterState::print()
{
    cout << "waiting for quarter" << endl;
}
