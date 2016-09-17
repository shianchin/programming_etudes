CPP=g++

.PHONY: all
all: SingletonClient run

SingletonClient: SingletonClient.cpp Singleton.cpp
	$(CPP) SingletonClient.cpp Singleton.cpp -o SingletonClient

.PHONY: run
run:
	./SingletonClient

.PHONY: clean
clean:
	rm -f SingletonClient
