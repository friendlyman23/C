#include <stdio.h>

int main(void)
{
  printf("\n\n\n");

  union {
    double a; //8 bytes

    struct { 	//16 bytes
      char b[4];
      double c;
      int d;
    } e;

    char f[4]; //4 bytes
  } u;

  printf("sizeof(u): %lu\n", sizeof(u));
  printf("sizeof(u.a): %lu\n", sizeof(u.a));
  printf("sizeof(u.e): %lu\n", sizeof(u.e));
  printf("sizeof(u.e.b): %lu\n", sizeof(u.e.b));
  printf("sizeof(u.e.c): %lu\n", sizeof(u.e.c));
  printf("sizeof(u.e.d): %lu\n", sizeof(u.e.d));
  printf("sizeof(u.f): %lu\n", sizeof(u.f));




  printf("\n\n\n");
  return 0;
}
