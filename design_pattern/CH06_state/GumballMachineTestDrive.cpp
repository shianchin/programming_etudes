#include <iostream>
using namespace std;

#include "GumballMachine.h"

int main()
{
    cout << "design pattern - state!\n";
    GumballMachine* gumballMachine = new GumballMachine(5);
    cout << *gumballMachine;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout << *gumballMachine;

    gumballMachine->insertQuarter();
    gumballMachine->ejectQuarter();
    gumballMachine->turnCrank();

    cout << *gumballMachine;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->ejectQuarter();

    cout << *gumballMachine;

    gumballMachine->insertQuarter();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout << *gumballMachine;

    delete gumballMachine;
    return 0;
}
