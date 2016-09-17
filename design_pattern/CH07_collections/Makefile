CPP=g++
EXE=Cafe
SRC=\
	Cafe.cpp \
	DinerMenu.cpp \
	DinerMenuIterator.cpp \
	PancakeHouseMenu.cpp \
	PancakeHouseMenuIterator.cpp \

.PHONY: all
all: Cafe run

$(EXE): $(SRC)
	$(CPP) $(SRC) -o $(EXE)

.PHONY: run
run:
	./$(EXE)

.PHONY: clean
clean:
	rm -f $(EXE)
