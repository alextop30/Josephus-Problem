CC = g++
CFLAGS = -Wall -g -std=c++11

all: main

main.o: definitions.h includes.h josephus_prob.cc
	${CC} ${CFLAGS} -c josephus_prob.cc

main: main.o
	${CC} ${CFLAGS} josephus_prob.o -o josephus_problem

clean:
	rm -rf *.o
	rm -rf josephus_problem
