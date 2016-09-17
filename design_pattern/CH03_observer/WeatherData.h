#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Subject.h"
#include "Observer.h"
#include <vector>
using namespace std;

class WeatherData : public Subject
{
public:
    void registerObserver(Observer* o);
    void removeObserver(Observer* o);
    void notifyObservers();
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);
    float getTemperature();
    float getHumidity();
    float getPressure();

private:
    vector<class Observer*> observers;
    float temperature;
    float humidity;
    float pressure;
};

#endif
