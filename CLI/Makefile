CC=g++
CFLAGS=-std=c++11 -pedantic -Wall -Wextra

main: main.o
	$(CC) -o main main.o

main.o: main.cpp Helper/DataLoop/DataLoop.h
	$(CC) $(CFLAGS) -c -g main.cpp

clean:
	rm -f *.o *.exe