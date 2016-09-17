#ifndef PancakeHouseMenuIterator_H
#define PancakeHouseMenuIterator_H

#include "Iterator.h"
#include <iostream>
#include <string>
using namespace std;

class PancakeHouseMenuIterator : public Iterator
{
public:
    PancakeHouseMenuIterator(vector<string> items);
    ~PancakeHouseMenuIterator();
    bool hasNext();
    string next();

private:
    int position;
    vector<string> items;
};

#endif
