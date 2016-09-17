#ifndef DINERMENUITERATOR_H
#define DINERMENUITERATOR_H

#include "Iterator.h"
#include <iostream>
#include <string>
using namespace std;

class DinerMenuIterator : public Iterator
{
public:
    DinerMenuIterator(vector<string> items);
    ~DinerMenuIterator();
    bool hasNext();
    string next();

private:
    int position;
    vector<string> items;
};

#endif
