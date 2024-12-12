remind: remind.o readline.o
	clang -g -O0 remind.o readline.o -o remind

remind.o: remind.c readline.h
	clang -g -O0 -c remind.c

readline.o: readline.c readline.h
	clang -g -O0 -c readline.c
