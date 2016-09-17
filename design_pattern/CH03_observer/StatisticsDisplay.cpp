#include "StatisticsDisplay.h"

#include <iostream>
using namespace std;

StatisticsDisplay::StatisticsDisplay(WeatherData* weatherData)
    : maxTemp(0.0)
    , minTemp(200)
    , tempSum(0.0)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

StatisticsDisplay::~StatisticsDisplay()
{
    weatherData->removeObserver(this);
}

void StatisticsDisplay::update(float temp, float humidity, float pressure)
{
    tempSum += temp;
    numReadings++;
    if (temp > maxTemp) {
        maxTemp = temp;
    }
    if (temp < minTemp) {
        minTemp = temp;
    }

    display();
}

void StatisticsDisplay::display()
{
    cout << "Avg/Max/Min temperature = " << (tempSum / numReadings)
            << "/" << maxTemp << "/" << minTemp << endl;

}
