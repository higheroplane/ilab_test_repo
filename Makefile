CC=gcc
CFLAGS=-c -Wall -O3

all: main.o hello.o factorial.o
	$(CC) main.o factorial.o hello.o -o hello 

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

hello.o: hello_src/hello.cpp
	$(CC) $(CFLAGS) hello_src/hello.cpp

factorial.o: factorial.cpp
	$(CC) $(CFLAGS) factorial.cpp


cr: all
	./hello

r:
	./hello

vim:
	vim main.cpp

clean:
	rm -rf *.o hello