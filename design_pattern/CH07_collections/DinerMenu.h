#ifndef DINERMENU_H
#define DINERMENU_H

#include "Menu.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class DinerMenu : public Menu
{
public:
    DinerMenu();
    ~DinerMenu();
    void addItem(string name);
    vector<string> getMenuItems();
    Iterator* createIterator();
    void print();
    // other menu methods here

private:
    const int MAX_ITEMS;
    int numberOfItems;
    vector<string> menuItems;
};

#endif
