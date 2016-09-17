#include "SoldState.h"

#include <iostream>
using namespace std;

SoldState::SoldState(GumballMachine* gumballMachine)
{
    this->gumballMachine = gumballMachine;
}

void SoldState::insertQuarter()
{
    cout << "Please wait, we're already giving you a gumball" << endl;
}

void SoldState::ejectQuarter()
{
    cout << "Sorry, you already turned the crank" << endl;
}

void SoldState::turnCrank()
{
    cout << "Turning twice doesn't get you another gumball!" << endl;
}

void SoldState::dispense()
{
    gumballMachine->releaseBall();
    if (gumballMachine->getCount() > 0)
    {
        gumballMachine->setState(gumballMachine->getNoQuarterState());
    }
    else
    {
        cout << "Oops, out of gumballs!" << endl;
        gumballMachine->setState(gumballMachine->getSoldOutState());
    }
}

void SoldState::print()
{
    cout << "dispensing a gumball" << endl;
}
