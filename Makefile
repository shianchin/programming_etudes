hello_world.exe : hello_world.o
	g++.exe hello_world.o -o hello_world.exe

hello_world.o : hello_world.cpp
	g++.exe -c hello_world.cpp -o hello_world.o

.PHONY : clean
clean :
		-rm -f hello_world.exe hello_world.o