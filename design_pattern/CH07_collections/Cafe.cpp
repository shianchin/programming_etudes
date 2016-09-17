#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "DinerMenu.h"
#include "PancakeHouseMenu.h"
#include "Iterator.h"

void printMenu(Iterator* iterator);

int main()
{
    cout << "design pattern - collections!\n";

    PancakeHouseMenu* pancakeHouseMenu = new PancakeHouseMenu();
    DinerMenu* dinerMenu = new DinerMenu();

    cout << "\nMENU\n----\nBREAKFAST" << endl;
    vector<string> breakfastItems = pancakeHouseMenu->getMenuItems();
    for (int i = 0; i < breakfastItems.size(); i++)
    {
        cout << breakfastItems[i] << endl;
    }

    cout << "\nLUNCH" << endl;
    vector<string> lunchItems = dinerMenu->getMenuItems();

    for (int i = 0; i < lunchItems.size(); i++)
    {
        cout << lunchItems[i] << endl;
    }

    // with iterators
    Iterator* pancakeIterator = pancakeHouseMenu->createIterator();
    Iterator* dinerIterator = dinerMenu->createIterator();

    cout << "\nMENU (with iterators)\n----\nBREAKFAST" << endl;
    printMenu(pancakeIterator);
    cout << "\nLUNCH" << endl;
    printMenu(dinerIterator);

    delete dinerMenu;
    delete pancakeHouseMenu;
    delete dinerIterator;
    delete pancakeIterator;
    return 0;
}

void printMenu(Iterator* iterator)
{
    while (iterator->hasNext())
    {
        cout << iterator->next() << endl;
    }
}
