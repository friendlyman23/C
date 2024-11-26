#include <stdio.h>

#define MSG_SIZE 100

void reverse(char *message);

int main(void)
{
   printf("\n\n");

   char msg[MSG_SIZE + 1];
   char *p = msg;
   char *q = msg;

   printf("Enter a message: ");
   fgets(msg, MSG_SIZE, stdin);

   reverse(msg);

   printf("%s", msg);

   printf("\n\n");

   return 0; 
}

void reverse(char *message)
{

   char *p = message;
   char *q = message;

   while (*q != '\n')
   {
      q++;
   }

   char temp;
   while (p != q)
   {
      temp = *p;
      *p = *q;
      *q = temp;
      p++;
      q--;
   }
}
