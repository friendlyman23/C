/* for statement idioms*/

#include <stdio.h>

int main(void){

    int i;

    // // counting up from 0 to n-1

    // for (i = 0; i < 10; i++){
    //     printf("\n%d\n", i);
    // }

    // // counting up from 1 to n

    // for (i = 1; i <= 10; i++){
    //     printf("\n%d\n", i);
    // }

    // // counting down from n-1 to 0

    // for (i = 10 - 1; i >= 0; i--){
    //     printf("\n%d\n", i);
    // }

    // // counting down from n to 1

    // for (i = 10; i >= 1; i--){
    //     printf("\n%d\n", i);
    // }

    // // omitting the first expression

    // i = 10;
    // for (; i > 0; --i){
    //     printf("\n%d\n", i);
    // }

    // // omitting the third expression

    // for (i = 10; i > 0;){
    //     printf("\n%d\n", i--);
    // }

    // // omitting the first and third expressions is essentially a while loop

    // i = 10;
    // for (; i > 0;) {
    //     printf("\n%d\n", i--);
    // }

    // // replace the first expression with a declaration.

    // for (int i = 1; i >= 10; i++){
    //     printf("\n%d\n", i);
    // }

    // // use null statement to write a loop whose body is empty.
    // //       - normal for loop:

    // for (d = 2; d < n; d++)
    //     if (n % d == 0)
    //         break;

    // // empty body version: 

    for (d = 2; d < n && n % d != 0; d++)
        /* lone semicolon on this line makes for a null statement, i.e., empty loop body */ ; 








    return 0;

}