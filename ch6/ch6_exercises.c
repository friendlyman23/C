#include <stdio.h>

int main(void){

    printf("\n");
    // int i = -10;

    // while (i < 0){
    //     printf("%d\n", i++);
    // }

    // int i, n;

    // printf("\nThis program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%d", &n);

    // i = 1;
    // while (i <= n){
    //     printf("%10d%10d\n", i, i * i);
    //     i++;

    // }

    /* Sums a series of numbers */
    // int n, sum = 0;

    // printf("This program sums a series of integers.\n");
    // printf("Enter integers (0 to terminate): ");

    // scanf("%d", &n);

    // while (n != 0){
    //     sum += n;
    //     scanf("%d", &n);
    // }
    // printf("The sum is: %d\n", sum);

    /* Calculates the number of digits in an integer*/

    // int digits = 0, n;
    // printf("\nEnter a nonnegative integer: ");
    // scanf("%d", &n);

    // do {
    //     n /= 10;
    //     digits++;
    // } while (n > 0);

    // printf("The number has %d digit(s).\n", digits);

    // 6.3 The for Statement

    // int i;

    // for (i = 10; i > 0; i--)
    //     printf("\nT minus %d and counting\n", i);

    // // compare with:

    // i = 10;
    // while (i > 0){
    //     printf("\nT minus %d and counting\n", i);
    //     i--;
    // }

    // Exercises

    // 1.)

    // int i = 1;
    // while (i <= 128) {
    //     printf("\n%d\n", i);
    //     i *= 2;
    // }

    // 2.)

    // int i = 9384;
    // do {
    //     printf("\n%d ", i);
    //     i /= 10;
    // } while (i > 0);

    // 3.)


    // int i, j;
    // for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    //     printf("\n%d ", i);
    

    // 4.)
    
    // int i;
    // for (i = 0; i++ < 10; )
    //     printf("\n%d\n", i);

    // 5.)

    // int i = 0;

    // printf("\n");

    // while (i < 10){
    //     printf("%d ", i);
    //     i++;
    // }

    // printf("\n");

    // i = 0;
    // for (; i < 10;){
    //     printf("%d ", i);
    //     i++;
    // }

    // printf("\n");
    
    // i = 0;
    // do {
    //     printf("%d ", i);
    //     i++;
    // } while (i < 10);
    
    // 6.)

    // int i;
    // printf("\n");
    // for (i = 1; i <= 128; printf("%d ", i), i *= 2)
    //     ;
    // printf("\n");

    // 7.)

    // int i;
    // printf("\n");
    // for (i = 9384; i > 0; printf("%d ", i), i /= 10)
    //     ;
    // printf("\n");

    // 8.)

    // int i;
    // for (i = 10; i >= 1; i /= 2)
    //     printf("%d ", i++);

    // 9.)

    // int i = 10;
    // int count = 0;
    // printf("\n");
    // while (count < 10){
    //     printf("%d ", i++);
    //     i /= 2;
    //     count += 1;
    // }
    
    // 10.)

    // int i;

    // int n = 0;
    // int sum = 0;
    // while (n < 10) {
    //     scanf("%d", &i);
    //     if (i == 0)
    //         goto end;
    //     sum += i;
    //     n++;
    //     end:
    //         printf("Entering zero has no effect\n");
    //     printf("sum: %d\n", sum);
    // }

    // 11.)
    // int sum = 0;
    // for (i = 0; i < 10; i++) {
    //     if (i % 2)
    //         continue;
    //     printf("%d: ", i);
    //     printf("%d    ", sum += i);
    // }
    // printf("%d", sum);

     // 12.) testing for prime. quickest way is to not check against n, but the square root of n. but the same can be
     // accomplished by leaving n alone and squaring the divisor instead. 


    int n = 10;
    for (int d = 2; d*d < n; d++) {
        if (n % d == 0) {
            printf("not prime: divisible by %d", d);
            break;
        }
    }

    // // 13.)

    // int m = 100;
    // for (int n = 0; m > 0; n++, printf("%d ", m /= 2))
    //     ;




    printf("\n");
    return 0;


}
