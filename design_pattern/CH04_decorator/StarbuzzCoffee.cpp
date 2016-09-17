#include <iostream>
using namespace std;

#include "Beverage.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "DarkRoast.h"
#include "Decaf.h"
#include "Soy.h"
#include "Mocha.h"
#include "Milk.h"
#include "Whip.h"

int main()
{
    cout << "design pattern - decorator!\n";

    Beverage* beverage = new Espresso();
    cout << beverage->getDescription() << " $" << beverage->cost() << endl;

    Beverage* beverage2 = new HouseBlend();
    cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;
    beverage2 = new Soy(beverage2);
    beverage2 = new Mocha(beverage2);
    cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

    Beverage* beverage3 = new DarkRoast();
    beverage3 = new Milk(beverage3);
    beverage3 = new Whip(beverage3);
    cout << beverage3->getDescription() << " $" << beverage3->cost() << endl;

    delete beverage;
    delete beverage2;
    delete beverage3;
    return 0;
}
