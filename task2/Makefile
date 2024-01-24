CC = g++

all: task2

task2: task2.o node.o
	$(CC) task2.o node.o -o task2

task2.o: task2.cpp node.hpp
	$(CC) -c task2.cpp
	
node.o: node.cpp node.hpp
	$(CC) -c node.cpp

clean:
	rm -f *.o
