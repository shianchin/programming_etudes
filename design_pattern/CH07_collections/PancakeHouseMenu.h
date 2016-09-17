#ifndef PANCAKEHOUSEMENU_H
#define PANCAKEHOUSEMENU_H

#include "Menu.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class PancakeHouseMenu : public Menu
{
public:
    PancakeHouseMenu();
    ~PancakeHouseMenu();
    void addItem(string name);
    vector<string> getMenuItems();
    Iterator* createIterator();
    void print();
    // other menu methods here

private:
    vector<string> menuItems;
};

#endif
