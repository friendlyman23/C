#include <stdio.h>

int main(void)
{
   printf("\n\n\n");
   printf("Enter message to be encrypted: ");
   int ch = getchar();
   char msg[80];
   int idx = 0;

   while (ch != '\n')
   {
      msg[idx++] = ch;
      ch = getchar();
   }

   printf("\n");

   int shift;
   printf("Enter shift amount (1-25): ");
   scanf("%d", &shift);

   printf("\n");

   printf("Encrypted message: ");
   for (int i = 0; i < idx; i++)
   {
      if ('A' <= msg[i] && msg[i] <= 'Z')
      {
	 printf("%c", ((msg[i] - 'A') + shift) % 26 + 'A');
      }

      else if ('a' <= msg[i] && msg[i] <= 'z')
      {
	 printf("%c", ((msg[i] - 'a') + shift) % 26 + 'a');
      }

      else
      {
	 printf("%c", msg[i]);
      }
   }


   





   

   
   printf("\n\n\n");
   
   return 0;
}
