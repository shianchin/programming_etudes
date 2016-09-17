#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "Duck.h"

class RubberDuck : public Duck
{
public:
    RubberDuck(void);
    ~RubberDuck(void);
    void display();
};

#endif
