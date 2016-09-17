#include "Singleton.h"

Singleton* Singleton::uniqueInstance(new Singleton());

Singleton::Singleton()
{

}

Singleton* Singleton::getInstance()
{
    return uniqueInstance;
}

string Singleton::getDescription()
{
    return "I'm a statically initialized Singleton!";
}
