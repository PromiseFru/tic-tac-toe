main: src/main.o src/myfunctions.o
	g++ src/main.o src/myfunctions.o -o bin/main

main.o: src/main.cpp
	g++ -c -wall src/main.cpp

myfunctions.o: include/myfunctions.h src/myfunctions.cpp
	g++ -c -wall src/myfunctions.cpp