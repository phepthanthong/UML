CC=g++
OBJ= main.o Bintz.o
DEPS= Bintz.h
Bintz.o: Bintz.cc
	$(CC) -c Bintz.cc

main.o: main.cc Bintz.cc
	$(CC) $(OBJ) -o main
