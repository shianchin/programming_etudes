#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherData.h"

class StatisticsDisplay : public Observer, DisplayElement
{
public:
    StatisticsDisplay(WeatherData* weatherData);
    ~StatisticsDisplay();
    void update(float temp, float humidity, float pressure);
    void display();

private:
    float maxTemp;
    float minTemp;
    float tempSum;
    int numReadings;
    WeatherData* weatherData;
};

#endif
