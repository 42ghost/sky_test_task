CC = g++

all: task1

task1: task1.o checkMask.o
	$(CC) task1.o checkMask.o -o task1

task1.o: task1.cpp checkMask.hpp
	$(CC) -c task1.cpp
	
checkMask.o: checkMask.cpp checkMask.hpp
	$(CC) -c checkMask.cpp

clean:
	rm -f *.o
