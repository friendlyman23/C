#include <stdio.h>

int main(void)
{
  printf("\n\n\n");

  struct {
    double a; // 8 bytes

    union { // 8 bytes
      char b[4];
      double c;
      int d;
    } e;

    char f[4]; // 4 bytes
  } s;

  printf("%lu", sizeof(s));




  printf("\n\n\n");
  return 0;
}
