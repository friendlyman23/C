#include <stdio.h>

#define MAX_LEN 80

void encrypt(char *msg, int shift);

int main(void)
{
   printf("\n\n\n");
   char msg[MAX_LEN + 1];
   int shift;

   printf("Enter message to be encrypted: ");

   fgets(msg, MAX_LEN, stdin);

   printf("Enter shift amount (1-25): ");
   scanf("%d", &shift);
   printf("\n");

   encrypt(msg, shift);

   printf("Encrypted message: ");

   printf("%s", msg);

   
   printf("\n\n\n");
   
   return 0;
}

void encrypt(char *msg, int shift)
{
   for (char *p = msg; *p; p++)
   {
      if ('A' <= *p && *p <= 'Z')
      {
	 *p = ((*p - 'A') + shift) % 26 + 'A';
      }

      else if ('a' <= *p && *p <= 'z')
      {
	 *p = ((*p - 'a') + shift) % 26 + 'a';
      }

   }
   
}










