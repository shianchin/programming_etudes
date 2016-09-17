CPP=g++

.PHONY: all
all: StarbuzzCoffee run

BEVERAGE=Beverage.cpp Espresso.cpp HouseBlend.cpp DarkRoast.cpp Decaf.cpp
CONDIMENT=Soy.cpp Mocha.cpp Milk.cpp Whip.cpp

StarbuzzCoffee: StarbuzzCoffee.cpp $(BEVERAGE) $(CONDIMENT)
	$(CPP) StarbuzzCoffee.cpp $(BEVERAGE) $(CONDIMENT) -o StarbuzzCoffee

.PHONY: run
run:
	./StarbuzzCoffee

.PHONY: clean
clean:
	rm -f StarbuzzCoffee
