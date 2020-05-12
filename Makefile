main: src/main.o src/myfunctions.o
	g++ src/main.o src/myfunctions.o -o main

main.o: src/main.cpp
	g++ -c src/main.cpp

myfunctions.o: src/myfunctions.cpp
	g++ -c src/myfunctions.cpp