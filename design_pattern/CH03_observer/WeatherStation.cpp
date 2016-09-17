#include <iostream>
using namespace std;

#include "WeatherData.h"
#include "ForecastDisplay.h"
#include "CurrentConditionsDisplay.h"
#include "StatisticsDisplay.h"
#include "HeatIndexDisplay.h"

int main()
{
    cout << "design pattern - observer!\n";

    WeatherData* weatherData = new WeatherData();
    CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(weatherData);
    StatisticsDisplay* statisticsDisplay = new StatisticsDisplay(weatherData);
    ForecastDisplay* forecastDisplay = new ForecastDisplay(weatherData);
    HeatIndexDisplay* heatIndexDisplay = new HeatIndexDisplay(weatherData);

    weatherData->setMeasurements(80, 65, 30.4);
    weatherData->setMeasurements(82, 70, 29.2);
    weatherData->setMeasurements(78, 90, 29.2);

    delete currentDisplay;
    delete forecastDisplay;
    delete statisticsDisplay;
    delete heatIndexDisplay;
    delete weatherData;    // delete this last

    return 0;
}
