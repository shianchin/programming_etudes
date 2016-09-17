#include "Singleton.h"

Singleton* Singleton::uniqueInstance(NULL);

Singleton::Singleton()
{

}

Singleton* Singleton::getInstance()
{
    if (uniqueInstance == NULL)
    {
        uniqueInstance = new Singleton();
    }
    return uniqueInstance;
}

string Singleton::getDescription()
{
    return "I'm a classic Singleton!";
}
