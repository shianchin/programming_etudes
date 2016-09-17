CPP=g++
EXE=PizzaTestDrive
SRC=\
	CheesePizza.cpp \
	ClamPizza.cpp \
	PepperoniPizza.cpp \
	Pizza.cpp \
	PizzaStore.cpp \
	PizzaTestDrive.cpp \
	SimplePizzaFactory.cpp \
	VeggiePizza.cpp \

.PHONY: all
all: $(EXE) run

$(EXE): $(SRC)
	$(CPP) $(SRC) -o $(EXE)

.PHONY: run
run:
	./$(EXE)

.PHONY: clean
clean:
	rm -f $(EXE)
