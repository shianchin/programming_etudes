#include "PancakeHouseMenu.h"
#include "PancakeHouseMenuIterator.h"

#include <iostream>
using namespace std;

PancakeHouseMenu::PancakeHouseMenu()
{
    addItem("K&B's Pancake Breakfast");
    addItem("Regular Pancake Breakfast");
    addItem("Blueberry Pancakes");
    addItem("Waffles");
}

PancakeHouseMenu::~PancakeHouseMenu()
{
}

void PancakeHouseMenu::addItem(string name)
{
    menuItems.push_back(name);
}

vector<string> PancakeHouseMenu::getMenuItems()
{
    return menuItems;
}

Iterator* PancakeHouseMenu::createIterator()
{
    return new PancakeHouseMenuIterator(menuItems);
}

void PancakeHouseMenu::print()
{
    cout << "Pancake House Menu" << endl;
}
