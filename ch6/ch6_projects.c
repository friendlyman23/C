#include <stdio.h>

int main(void){

    printf("\n");

    // 1.)

    // float earliest = 0;
    // float input;

    // do {
    //     printf("Enter a number: ");
    //     scanf("%f", &input);
    //     if (input > earliest)
    //         earliest = input;

    // } while (input > 0);
        
    // printf("The largest number entered was %.2f", earliest);

    // 2.)

    // int m, n, temp, blah;

    // printf("Enter two integers: ");
    // scanf("%d%d", &m, &n);

    // while (n != 0){
    //     printf("temp set to value of n: %d\n", temp = n);
    //     printf("value of n set to m mod n: %d\n", n = m % n); 
    //     printf("m set to value of temp: %d\n", m = temp);
    //     printf("\n");
    // }

    // printf("Greatest common divisor: %d\n", m);

    // 3.)

    // int m, n, o, p, temp;

    // printf("Enter a fraction ");
    // scanf("%d/%d", &m, &n);

    // o = m;
    // p = n;

    // while (p != 0){
    //     temp = p;
    //     p = o % p;
    //     o = temp;
    // }

    // printf("In lowest terms: %d/%d", (m / o), (n / o));

    // 4.)

    
    // /* Calculates a broker's commission*/


        // float commission, value;

        // while (1){
        //     printf("Enter value of trade: ");
        //     scanf("%f", &value);

        //     if (value == 0)
        //         break;
        //     if (value < 2500.00f)
        //         commission = 30.00f + 0.17f * value;
        //     else if (value < 6250.00f)
        //         commission = 56.00f + 0.0066f * value;
        //     else if (value < 20000.00f)
        //         commission = 76.00f + 0.0034f * value;
        //     else if (value < 50000.00f)
        //         commission = 100.00f + 0.0022f * value;
        //     else if (value < 500000.00f)
        //         commission = 155.00f + 0.0011f * value;
        //     else
        //         commission = 255.00f + 0.0009f * value;

        //     if (commission < 39.00f)
        //         commission = 39.00f;

        //     printf("Commission: $%.2f\n", commission);
        // }

        // 5.)

        // int num, tens, ones;
        // printf("Enter a number: ");
        // scanf("%d", &num);

        // do {
        //     printf("%d", num%10);
        //     num /= 10;
        // } while (num != 0);

        // 6.)

        // int m, n;
        // printf("Enter a number: ");
        // scanf("%d", &n);
        // for (m = 1; m * m <= n; m++){
        //     if ((m * m) % 2 == 0)
        //         printf("%d\n", m*m);
        // }
        
        // 7.)

        // int n, odd, square;

        // printf("\nThis program prints a table of squares.\n");
        // printf("Enter number of entries in table: ");
        // scanf("%d", &n);

        // odd = 3;
        // for (int i = square = 1; i <= n; odd +=2, ++i) {
        //     printf("%10d%10d\n", i, square);
        //     square += odd;
        // }

        // 8.)

        // int days;
        // int spaces;
        // int num = 1;
        // int wk_ctr = 0;

        // printf("Enter number of days in month: ");
        // scanf("%d", &days);
        // printf("Enter starting day of the week (1=Sun, 7=Sat): ");
        // scanf("%d", &spaces);
        // spaces -= 1;

        // for (; spaces > 0; spaces--, wk_ctr++)
        //     printf("%3s", " ");
        
        
        // while (num <= days){
        //     if (wk_ctr == 7){
        //         wk_ctr = 0;
        //         printf("\n");
        //     }
        //     printf("%3d", num);
        //     num++;
        //     wk_ctr++;
        // }
        
        
        // 9.)

        // float principal, interest_rate, monthly_payment;
        // int total_payments;

        // printf("Enter amount of principal: ");
        // scanf("%f", &principal);

        // printf("Enter interest rate: ");
        // scanf("%f", &interest_rate);

        // interest_rate /= 100;

        // printf("Enter monthly payment: ");
        // scanf("%f", &monthly_payment);

        // printf("Enter number of monthly payments: ");
        // scanf("%d", &total_payments);
        // printf("\n");

        // printf("%20s%20s\n", "Payments remaining", "Remaining principal");
        // while (principal > 0){
        //     principal += principal * (interest_rate / 12);
        //     principal -= monthly_payment;
        //     total_payments--;
        //     printf("%20d%20.2f\n", total_payments, principal);
        // }

        // 10.)

        // int earliest_yr, earliest_mth, earliest_day;
        // int i_yr, i_mth, i_day;

        // printf("\nEnter a date (mm/dd/yy): ");
        // scanf("%d/%d/%d", &earliest_mth, &earliest_day, &earliest_yr);
        // while (1) {
        //     printf("Enter a date (mm/dd/yy): ");
        //     scanf("%d/%d/%d", &i_mth, &i_day, &i_yr);
        //     if (i_mth == 0 && i_day == 0 && i_yr == 0)
        //         break;
        //     // if (i_yr < earliest_yr){
        //     //     earliest_yr = i_yr;
        //     //     earliest_mth = i_mth;
        //     //     earliest_day = i_day;    
        //     // }
        //     // else if (i_yr == earliest_yr && i_mth < earliest_mth){
        //     //         earliest_yr = i_yr;
        //     //         earliest_mth = i_mth;
        //     //         earliest_day = i_day;
        //     // }
        //     // else if (i_yr == earliest_yr && i_mth == earliest_mth && i_day < earliest_day){
        //     //         earliest_yr = i_yr;
        //     //         earliest_mth = i_mth;
        //     //         earliest_day = i_day;
        //     // }

        //     // more concise:

        //     if (i_yr < earliest_yr ||
        //         i_yr == earliest_yr && i_mth < earliest_mth ||
        //         i_yr == earliest_yr && i_mth == earliest_mth && i_day < earliest_day) {

        //         earliest_yr = i_yr;
        //         earliest_mth = i_mth;
        //         earliest_day = i_day;

        //     }
        // }
        

        // printf("%d/%d/%d is the earliest date", earliest_mth, earliest_day, earliest_yr);

        // 11.)

        // int num;
        // float e, fact;

        // printf("Enter a number for approximating e: ");
        // scanf("%d", &num);
        // e = 1.0f;
    
        // for (int i = 1; i <= num; i++) {
        //     int fact = 1;
        //     printf("i = %d", i);
        //     for (int j = 1; j <= i; j++) {
        //         printf("\nj = %d", j);
        //         fact *= j;
        //     }
        //     e += (1.0f / fact);
        
        //     printf("\nfact = %d", fact);
        //     printf("\n\n\n");

        // }

        // printf("e = %f", e);

        
        // 12.)

        float epsilon;
        float e = 1.0f;
        double current_term = 1.0f;
        int fact, i;
    


        printf("Enter a small floating point number for epsilon: ");
        scanf("%f", &epsilon);

        i = 1;
        while (current_term > epsilon){
            fact = 1;   // reset factorial to 1 on each loop
            for (int j = 1; j <= i; j++)    // compute the factorial for i
                fact *= j;  // store the result in fact
            current_term = 1.0f / fact;     // compute the next addition to e
            e += current_term;  // add the result to e
            i++;   // increment i for the next loop
        }

        printf("i = %d\n", i);
        printf("factorial = %d\n", fact);
        printf("current term = %f\n", current_term);
        printf("e = %f", e);

        


    printf("\n");
    return 0;

}