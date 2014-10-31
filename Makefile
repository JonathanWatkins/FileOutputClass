CC=g++
CFLAGS=-c -Wall

all: fout

fout: main.o FileOutput.o
	$(CC) main.o FileOutput.o -o fout

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

FileOutput.o: FileOutput.cpp
	$(CC) $(CFLAGS) FileOutput.cpp

clean:
	rm -rf *.o fout
