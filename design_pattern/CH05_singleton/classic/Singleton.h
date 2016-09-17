#ifndef SINGLETON_H
#define SINGLETON_H

#include <string>
using namespace std;

class Singleton
{
public:
    static Singleton* getInstance();
    string getDescription();

private:
    Singleton();
    static Singleton* uniqueInstance;
};

#endif
