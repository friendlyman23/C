calc: calc.o stack.o
	clang -g -O0 calc.o stack.o -o calc

calc.o: calc.c stack.h
	clang -g -O0 -c calc.c 

stack.o: stack.c stack.h
	clang -g -O0 -c stack.c 
