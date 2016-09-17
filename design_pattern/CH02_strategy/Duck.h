#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
    Duck(void);
    void setFlyBehavior(FlyBehavior* fb);
    void setQuackBehavior(QuackBehavior* qb);
    virtual void display()=0;
    void performFly();
    void performQuack();
    void swim();

protected:
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;
};

#endif
