CPP=g++
EXE=GumballMachineTestDrive
SRC=\
	GumballMachine.cpp \
	GumballMachineTestDrive.cpp \
	HasQuarterState.cpp \
	NoQuarterState.cpp \
	SoldOutState.cpp \
	SoldState.cpp \

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
