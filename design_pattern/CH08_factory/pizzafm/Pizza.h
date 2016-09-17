#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>
using namespace std;

class Pizza
{
public:
    void prepare();
    void bake();
    virtual void cut();
    void box();
    string getName();
    friend ostream& operator<<(ostream &output, const Pizza &piz);

protected:
    string name;
    string dough;
    string sauce;
    vector<string> toppings;
};

#endif
