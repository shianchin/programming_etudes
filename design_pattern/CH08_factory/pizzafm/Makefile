CPP=g++
EXE=PizzaTestDrive
SRC=\
	ChicagoPizzaStore.cpp \
	ChicagoStyleCheesePizza.cpp \
	ChicagoStyleClamPizza.cpp \
	ChicagoStylePepperoniPizza.cpp \
	ChicagoStyleVeggiePizza.cpp \
	NYPizzaStore.cpp \
	NYStyleCheesePizza.cpp \
	NYStyleClamPizza.cpp \
	NYStylePepperoniPizza.cpp \
	NYStyleVeggiePizza.cpp \
	Pizza.cpp \
	PizzaStore.cpp \
	PizzaTestDrive.cpp \

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
