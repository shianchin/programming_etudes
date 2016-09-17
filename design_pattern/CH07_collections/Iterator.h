#ifndef ITERATOR_H
#define ITERATOR_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Iterator
{
public:
    virtual bool hasNext()=0;
    virtual string next()=0;
};

#endif
