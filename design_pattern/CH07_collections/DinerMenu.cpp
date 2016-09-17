#include "DinerMenu.h"
#include "DinerMenuIterator.h"

#include <iostream>
using namespace std;

DinerMenu::DinerMenu()
    : MAX_ITEMS(6)
    , numberOfItems(0)
{
    //menuItems = new string[MAX_ITEMS];

    addItem("Vegetarian BLT");
    addItem("BLT");
    addItem("Soup of the day");
    addItem("Hotdog");
    addItem("Steamed Veggies and Brown Rice");
    addItem("Pasta");
}

DinerMenu::~DinerMenu()
{
}

void DinerMenu::addItem(string name)
{
    if (numberOfItems >= MAX_ITEMS)
    {
        cout << "Sorry, menu is full!  Can't add item to menu" << endl;
    }
    else
    {
        menuItems.push_back(name);
        numberOfItems = numberOfItems + 1;
    }
}

vector<string> DinerMenu::getMenuItems()
{
    return menuItems;
}

Iterator* DinerMenu::createIterator()
{
    return new DinerMenuIterator(menuItems);
}

void DinerMenu::print()
{
    cout << "Diner Menu" << endl;
}
