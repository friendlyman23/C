justify.out: justify.o line.o word.o
	clang -g -O0 justify.o line.o word.o -o justify.out

justify.o: justify.c line.h word.h
	clang -g -O0 -c justify.c 

line.o: line.c line.h
	clang -g -O0 -c line.c

word.o: word.c word.h
	clang -g -O0 -c word.c
