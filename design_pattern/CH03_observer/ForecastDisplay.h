#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherData.h"

class ForecastDisplay : public Observer, DisplayElement
{
public:
    ForecastDisplay(WeatherData* weatherData);
    ~ForecastDisplay();
    void update(float temp, float humidity, float pressure);
    void display();

private:
    float currentPressure;
    float lastPressure;
    WeatherData* weatherData;
};

#endif
