game.out: main.o rps.o
	g++ -o game.out main.o rps.o

main.o: main.cpp rps.hpp
	g++ -c main.cpp

rps.o: rps.cpp rps.hpp
	g++ -c rps.cpp

