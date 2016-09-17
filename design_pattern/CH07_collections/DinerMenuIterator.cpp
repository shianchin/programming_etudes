#include "DinerMenuIterator.h"

#include <iostream>
#include <vector>
using namespace std;

DinerMenuIterator::DinerMenuIterator(vector<string> items)
    : position(0)
{
    this->items = items;
}

string DinerMenuIterator::next()
{
    string menuItem = items[position];
    position = position + 1;
    return menuItem;
}

bool DinerMenuIterator::hasNext()
{
    if (position >= items.size())
    {
        return false;
    }
    else
    {
        return true;
    }
}
