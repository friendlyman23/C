#ifndef READLINE_H
#define READLINE_H

// read_line:	skips leading white-space characters,
// 	then reads the remainder of the input line and 
// 	stores it in str. truncates the line if its
// 	length exceeds n. returns the number of 
// 	characters stored.
int read_line(char str[], int n);

#endif
