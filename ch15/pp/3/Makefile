quicksort.out: qsort.o quicksort.o
	clang -g -O0 qsort.o quicksort.o -o quicksort.out

qsort.o: qsort.c quicksort.h
	clang -g -O0 -c qsort.c

quicksort.o: quicksort.c quicksort.h
	clang -g -O0 -c quicksort.c
