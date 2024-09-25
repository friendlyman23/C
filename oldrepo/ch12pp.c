#include <stdio.h>
#include <ctype.h>

int main(void)
{
   // 1a.)
   printf("\n\n\n");

   // char input [50];
   // int count = 0;
   // printf("Enter a message: ");
   // char newchar = getchar();
   // while (count < sizeof input / sizeof input[0] && newchar != '\n') {
   // 	input[count] = newchar;
   // 	count++;
   // 	newchar = getchar();
   // }
   // 
   // count --;
   //
   // printf("Reversal is: ");
   //
   // for (count; count >= 0; count--) {
   // 	printf("%c", input[count]);
   // }
   // 
   //


   // 1b.)
   //
   // char input [50];
   // printf("Enter a message: ");
   // char *p = &input[0];
   // char newchar = getchar();
   // while (p < &input[50] && newchar != '\n') {
   // 	*p = newchar;
   // 	p++;
   // 	newchar = getchar();
   // }
   // 
   // p--;
   // 
   // printf("Reversal is: ");
   // 
   // for (; p >= &input[0]; p--) {
   // 	printf("%c", *p);
   // }




   // 2a.)
   // char input[50];
   // int count = 0;
   // printf("Enter a message: ");
   // char newchar = getchar();
   // while (newchar != '\n' && count < 50) {
   // 	newchar = tolower(newchar);
   // 	if ('a' <= newchar && newchar <= 'z') {
   // 		input[count] = newchar;
   // 		count++;
   // 	}
   // 	newchar = getchar();
   // }
   //
   // count--; 
   // int count_copy = count;
   // 
   // for (int i = 0; i < count_copy; i++, count--) {
   // 	if (input[i] != input[count]) {
   //      			printf("Not a palindrome\n");
   // 		return 0;
   // 	}
   //      	}
   //
   // printf("Palindrome");

   // 2b.)
   //  char input[50];
   //  char *p = &input[0];
   //  printf("Enter a message: ");
   //  char newchar = getchar();
   //  while (newchar != '\n' && p < &input[50]) {
   //  	newchar = tolower(newchar);
   //  	if ('a' <= newchar && newchar <= 'z') {
   //  		*p++ = newchar;
   //  	}
   //  	newchar = getchar();
   //  }
   //  p--;	
   //  for (char *q = &input[0]; q < p; q++, p--) {
   //  	if (*p != *q) {
   //       			printf("Not a palindrome\n");
   //  		return 0;
   //  	}
   //       	}
   // 
   //  printf("Palindrome");

   // 3.) 
   //

   // char input[50];
   // printf("Enter a message: ");
   // char *p = input;
   // char newchar = getchar();
   // while (p < input + sizeof input && newchar != '\n') {
   // 	*p = newchar;
   // 	p++;
   // 	newchar = getchar();
   // }
   // 
   // p--;
   // 
   // printf("Reversal is: ");
   // 
   // for (; p >= input; p--) {
   // 	printf("%c", *p);
   // }

   // 4.)

   //  char input[50];
   //  char *p = input;
   //  printf("Enter a message: ");
   //  char newchar = getchar();
   //  while (newchar != '\n' && p < input + sizeof input) {
   //  	newchar = tolower(newchar);
   //  	if ('a' <= newchar && newchar <= 'z') {
   //  		*p++ = newchar;
   //  	}
   //  	newchar = getchar();
   //  }
   //  p--;	
   //  for (char *q = input; q < p; q++, p--) {
   //  	if (*p != *q) {
   //       			printf("Not a palindrome\n");
   //  		return 0;
   //  	}
   //       	}
   // 
   //  printf("Palindrome");
   // 5.)

   /***************************************************
*	you can cage a swallow can't you?	*
*	you can't swallow a cage can you?	*
****************************************************/
   // v1
  //  char arr[50] = {0};
  //  char *p = &arr[0];
  //  char ch;
  //  char term;
		//
  //  printf("Enter a sentence: ");
		//
		//
  //  for (;;) {
  //     ch = getchar();
  //     if (ch == '.' || ch == '?' || ch == '!') {
	 // term = ch;
	 // break;
  //     }
  //     else {
	 // *p++ = ch;
  //     }
  //  }
		//
  //  p--;
		//
  //  // for (char *q = arr; *q != 0; q++) printf("%c", *q);
  //  char *q, *r;
  //  q = r = p;
		//
  //  for (;;) {
		//
  //     int break_flag = 0;
		//
  //     // p, q and r all start on the last letter of the last word
  //     // first, shift p forward until it reaches the space preceding the current word
  //     while (*p != ' ' && p != &arr[0]) {
	 // p--;
	 // if (p == &arr[0]) {
	 //    break_flag = 1;
	 //    while (p <=r) putchar(*p++);
	 // }
  //     }
  //     
  //     if (break_flag) {
	 //    while (p <=r) putchar(*p++);
	 //    break;
  //     }
  //     else 
		//
	 // // shift q to the space
	 // q = p;
		//
	 // // shift p forward once to be at the beginning of the word
	 // p++;
		//
	 // // q remains on the space
	 // // r remains at the end of the word
	 // 
	 // // advance p forward through the word and put the chars
	 // while (p <= r) putchar(*p++);
		//
	 // // if break_flag, exit early because we are done
	 // if (break_flag) {
	 //    break;
	 // }
		//
	 // // print the space that q is on
	 // putchar(*q);
		//
	 // // move all pointers to the end of the next word
	 // p = r = --q;
  //  }
		//
  //  putchar(term);

   

























   printf("\n\n\n");


   return 0;
}
