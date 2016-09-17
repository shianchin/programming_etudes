CPP=g++

.PHONY: all
all: WeatherStation run

SUBJECT=WeatherData.cpp
OBSERVER=ForecastDisplay.cpp CurrentConditionsDisplay.cpp StatisticsDisplay.cpp HeatIndexDisplay.cpp

WeatherStation: WeatherStation.cpp $(SUBJECT) $(OBSERVER)
	$(CPP) WeatherStation.cpp $(SUBJECT) $(OBSERVER) -o WeatherStation

.PHONY: run
run:
	./WeatherStation

.PHONY: clean
clean:
	rm -f WeatherStation
