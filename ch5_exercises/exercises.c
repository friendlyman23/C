#include <stdio.h>

int main (){
    
    // int i = 1;
    // int j = 2;
    // int k = 3;

    // printf("%d\n", i < j || k);
    
    // return 0;

    // int i = 1; int j = 1; int k = 1;

    // printf("%d \n", ++i || ++j && ++ k);  // i = 2; j = 1; k = 1;
    // printf("%d %d %d \n", i, j, k); // 2, 1, 1

    // return 0;

    // int i = 1 ; int j = 0;
    
    // printf("\n %d \n", 

    //     (i > j) - (i < j)

    // );
    
    // int i = -17;

    // printf("\n %d \n", i >= 0 ? i : -i);

    // int age = 20;
    // _Bool teenager;

    // teenager = age >= 13 && age <= 19;

    // printf("\n%d\n",teenager);

    // int i = 1; int j = 2; int k = 3;

    // printf("\n%d\n", i < j || k);
    
    // int score = 70;

    // if (score >= 90)
    //     printf("A");
    // else if (score >= 80)
    //     printf("B");
    // else if (score >= 70)
    //     printf("C");
    // else if (score >= 60)
    //     printf("D");
    // else
    //     printf("F");

    // if (score < 60)
    //     printf("F");
    // else if (score < 70)
    //     printf("D");
    // else if (score < 80)
    //     printf("C");
    // else if (score < 90)
    //     printf("B");
    // else
    //     printf("A");

    // switch (i % 3) {
    //     case 0: printf("zero\n");
    //             break;
    //     case 1: printf("one\n");
    //             break;
    //     case 2: printf("two\n");
    //             break;
    // }
    
    int area_code = 300;
    printf("\n");
    switch (area_code) {
        case 229:
                printf("Albany\n");
                break;
        case 404: case 470: case 678: case 770: 
                printf("Atlanta\n");
                break;
        case 478:
                printf("Macon\n");
                break;
        case 706: case 762:
                printf("Columbus\n");
                break;
        case 912:
                printf("Savannah\n");
                break;
        default:
                printf("Area code not recognized\n");
                break;
    


                

                

        
        
    }


    return 0;


    

}