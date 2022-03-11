CC=g++
CFLAGS=-c -Wall -O3 -std=c++17

all: mmm aaa
	$(CC) main.o array.o -o main

mmm: main.cpp
	$(CC) $(CFLAGS) main.cpp

aaa: array.cpp
	$(CC) $(CFLAGS) array.cpp

cr: all
	./hello

r:
	./hello

vim:
	vim main.cpp

clean:
	rm -rf *.o main