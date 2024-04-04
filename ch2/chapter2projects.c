#include <stdio.h>

int main(void)
{

    // 1.)
    // printf("       *\n");
    // printf("      * \n");
    // printf("     *  \n");
    // printf("*   *   \n");
    // printf(" * *    \n");
    // printf("  *     \n");
    
    // 2 & 3.)    
    // int radius;

    // printf("%f\n", (4.0f / 3.0f) * 3.14f * radius * radius * radius);

    // printf("Please enter the radius of the sphere.\n");
    // scanf("%d", &radius);

    // printf("The volume of the sphere is: %f\n", (4.0f / 3.0f) * 3.14f * radius * radius * radius);

    // 4.)    
    // float price;

    // printf("Enter the item's price in dollars and cents. ");
    // scanf("%f", &price);

    // printf("The cost will be $%.2f with a sales tax of 5%%.\n", price += price * .05);

    // 5 & 6.)
    // int x;

    // printf("Enter the value for x. ");
    // scanf("%d", &x);

    // printf("%d\n", 
    // 3 * (x * x * x * x * x) 
    // + 2 * (x * x * x * x) 
    // - 5 * (x * x * x) 
    // - (x * x) 
    // + (7 * x) 
    // - 6); 

    // printf("%d\n", ((((3 * x + 2) 
    // * x - 5)
    // * x - 1)
    // * x + 7)
    // * x - 6);

    // 7.)
    // int dollars;

    // printf("Enter a dollar amount: ");
    // scanf("%d", &dollars);

    // printf("$20 bills: %d\n", dollars / 20);

    // dollars %= 20;

    // printf("$10 bills: %d\n", dollars / 10);

    // dollars %= 10;

    // printf("$5 bills: %d\n", dollars / 5);

    // dollars %= 5;

    // printf("$1 bills: %d\n", dollars);

    float principal, interest_rate, monthly_payment;

    printf("Enter amount of principal: ");
    scanf("%f", &principal);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    interest_rate /= 100;

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("\n");

    principal += principal * (interest_rate / 12);
    principal -= monthly_payment;
    printf("Balance remaining after first monthly payment: %.2f\n", principal);

    principal += principal * (interest_rate / 12);
    principal -= monthly_payment;
    printf("Balance remaining after second monthly payment: %.2f\n", principal);

    principal += principal * (interest_rate / 12);
    principal -= monthly_payment;
    printf("Balance remaining after third monthly payment: %.2f\n", principal);


    return 0;

}



