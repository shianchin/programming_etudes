#include <iostream>
using namespace std;

#include "Singleton.h"

int main()
{
    cout << "design pattern - singleton!\n";

    Singleton* singleton = Singleton::getInstance();
    cout << singleton->getDescription() << endl;

    Singleton* singleton2 = Singleton::getInstance();
    cout << singleton2->getDescription() << endl;

    delete singleton;
    //delete singleton2;    // do not delete twice

    return 0;
}
