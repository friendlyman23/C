justify: justify.o line.o word.o
	gcc -g -O0 -o justify justify.o line.o word.o

justify.o: justify.c line.c line.h word.c word.h
	gcc -c justify.c line.c word.c

line.o: line.c line.h
	gcc -c line.c

word.o: word.c word.h
	gcc -c word.c

