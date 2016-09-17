#include "ForecastDisplay.h"

#include <iostream>
using namespace std;

ForecastDisplay::ForecastDisplay(WeatherData* weatherData)
    : currentPressure(29.92)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

ForecastDisplay::~ForecastDisplay()
{
    weatherData->removeObserver(this);
}

void ForecastDisplay::update(float temp, float humidity, float pressure)
{
    lastPressure = currentPressure;
    currentPressure = pressure;

    display();
}

void ForecastDisplay::display()
{
    cout << "Forecast: " << endl;
    if (currentPressure > lastPressure)
    {
        cout << "Improving weather on the way!" << endl;
    }
    else if (currentPressure == lastPressure)
    {
        cout << "More of the same" << endl;
    }
    else if (currentPressure < lastPressure)
    {
        cout << "Watch out for cooler, rainy weather" << endl;
    }
}
