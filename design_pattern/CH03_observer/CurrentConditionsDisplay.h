#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"

class CurrentConditionsDisplay : public Observer, DisplayElement
{
public:
    CurrentConditionsDisplay(Subject* weatherData);
    ~CurrentConditionsDisplay();
    void update(float temperature, float humidity, float pressure);
    void display();

private:
    float temperature;
    float humidity;
    Subject* weatherData;
};

#endif
