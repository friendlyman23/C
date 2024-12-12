#this is a comment

#makefile format:
	# each group of lines is a "rule"
	# the first line in each rule gives a "target" file
		# and these are followed  by the files on which the target depends
	# the second line is a command to be executed if the target should need 
	# to be rebuilt because of a change to one of its dependent files


# justify (the executable file) depends on three files;
	# execute this command if justify needs to be rebuilt
	# because of a change to one of the dependent files
	
# justify.c includes word.h and line.h
	# -c means compile justify.c into an object file but not link it

justify: justify.o word.o line.o 
	gcc -o justify justify.o word.o line.o 
						

justify.o: justify.c word.h line.h 
	gcc -c justify.c 

word.o: word.c word.h
	gcc -c word.c

line.o: line.c line.h
	gcc -c line.c
