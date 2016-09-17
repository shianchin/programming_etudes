#include "PancakeHouseMenuIterator.h"

#include <iostream>
#include <vector>
using namespace std;

PancakeHouseMenuIterator::PancakeHouseMenuIterator(vector<string> items)
    : position(0)
{
    this->items = items;
}

string PancakeHouseMenuIterator::next()
{
    string menuItem = items[position];
    position = position + 1;
    return menuItem;
}

bool PancakeHouseMenuIterator::hasNext()
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
