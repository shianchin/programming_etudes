CPP=g++

.PHONY: all
all: MiniDuckSimulator run

DUCK=Duck.cpp MallardDuck.cpp RubberDuck.cpp DecoyDuck.cpp ModelDuck.cpp
FLY=FlyWithWings.cpp FlyRocketPowered.cpp FlyNoWay.cpp
QUACK=Quack.cpp FakeQuack.cpp MuteQuack.cpp Squeak.cpp

MiniDuckSimulator: MiniDuckSimulator.cpp $(DUCK) $(FLY) $(QUACK)
	$(CPP) MiniDuckSimulator.cpp $(DUCK) $(FLY) $(QUACK) -o MiniDuckSimulator

.PHONY: run
run:
	./MiniDuckSimulator

.PHONY: clean
clean:
	rm -f MiniDuckSimulator
