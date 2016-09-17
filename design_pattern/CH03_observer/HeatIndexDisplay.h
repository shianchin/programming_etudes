#ifndef HEATINDEXDISPLAY_H
#define HEATINDEXDISPLAY_H

#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherData.h"

class HeatIndexDisplay : public Observer, DisplayElement
{
public:
    HeatIndexDisplay(WeatherData* weatherData);
    ~HeatIndexDisplay();
    void update(float t, float rh, float pressure);
    void display();

private:
    float computeHeatIndex(float t, float rh);
    float heatIndex;
    WeatherData* weatherData;
};

#endif
