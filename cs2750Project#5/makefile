#This is a MakeFile for project#5 partA
CC = gcc
CFLAGS = -g
quadreq: main.o rootNo.o rootOne.o rootTwo.o delta.o
	$(CC) $(CFLAGS) -lm -o quadreq main.o rootNo.o rootOne.o rootTwo.o delta.o
main.o: main.c rootNo.h rootOne.h rootTwo.h delta.h
	$(CC) $(CFLAGS) -c main.c 
rootNo.o: rootNo.h 
rootOne.o: rootOne.h 
rootTwo.o: rootTwo.h 
delta.o: delta.h 
