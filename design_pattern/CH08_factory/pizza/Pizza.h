#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>
using namespace std;

class Pizza
{
public:
    string getName();
    void prepare();
    void bake();
    void cut();
    void box();
    friend ostream& operator<<(ostream &output, const Pizza &piz);

protected:
    string name;
    string dough;
    string sauce;
    vector<string> toppings;
};

#endif
