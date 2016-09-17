#include "WeatherData.h"

#include <algorithm>
using namespace std;

void WeatherData::registerObserver(Observer* o)
{
    observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o)
{
    observers.erase( remove( observers.begin(), observers.end(), o ), observers.end() );
}

void WeatherData::notifyObservers()
{
    for (int i = 0; i < observers.size(); i++)
    {
        observers[i]->update(temperature, humidity, pressure);
    }
}

void WeatherData::measurementsChanged()
{
    notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}

float WeatherData::getTemperature()
{
    return temperature;
}

float WeatherData::getHumidity()
{
    return humidity;
}

float WeatherData::getPressure()
{
    return pressure;
}
