// /* Calculates a broker's commission*/

// #include <stdio.h>

// int main(void)
// {
//     float commission, value;

//     printf("Enter value of trade: ");
//     scanf("%f", &value);

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

//     return 0;

// }

/* Prints a date in legal form */

// #include <stdio.h>

// int main(void)
// {
//     int month, day, year;

//     printf("Enter date (mm/dd/yy): ");
//     scanf("%d /%d /%d", &month, &day, &year);

//     printf("Dated this %d", day);
//     switch (day) {
//         case 1: case 21: case 31:
//             printf("st"); break;
//         case 2: case 22:
//             printf("nd"); break;
//         case 3: case 23:
//             printf("rd"); break;
//         default: printf("th"); break;
//     }
//     printf(" day of ");

//     switch (month) {
//         case 1:     printf("January");      break;
//         case 2:     printf("February");     break;
//         case 3:     printf("March");        break;
//         case 4:     printf("April");        break;
//         case 5:     printf("May");          break;
//         case 6:     printf("June");         break;
//         case 7:     printf("July");         break;
//         case 8:     printf("August");       break;
//         case 9:     printf("September");    break;
//         case 10:    printf("October");      break;
//         case 11:    printf("November");     break;
//         case 12:    printf("December");     break;
//     }

//     printf(", 20%.2d.\n", year);
//     return 0;

// }

#include <stdio.h>

int main(void)
{
    // Exercises
    // 1.)

    // a.)
    // int i = 2;
    // int j = 3;
    // int k;
    // k = i * j == 6;
    // printf("%d\n", k);

    // b.)
    // int i = 5;
    // int j = 10;
    // int k = 1;
    // printf("%d\n", k > i < j);

    // c.)
    // int i = 3;
    // int j = 2;
    // int k = 1;
    // printf("%d\n", i < j == j < k);

    // d.)
    // int i = 3; int j = 4; int k = 5;
    // printf("%d\n", i % j);
    // printf("%d\n", i % j + i < k);

    // 2.)
    // a.)
    // int i = 10; int j = 5;

    // printf("%d\n", !(i < j));

    // b.)
    // int i = 2; int j = 1;
    // printf("%d\n", !!i + !j);

    // c.)
    // int i = 5; int j = 0; int k = -5;
    // printf("%d\n", i && j || k);

    // d.)
    // int i = 1; int j = 2; int k = 3;
    // printf("%d\n", i < j || k);

    // 3.
    // a.)

    // int i = 3; int j = 4; int k = 5;

    // printf("%d\n", i < j || ++j < k);
    // printf("%d %d %d\n", i, j, k);

    // b.)
    // int i = 7; int j = 8; int k = 9;

    // printf("%d\n", i - 7 && j++ < k);
    // printf("%d %d %d\n", i, j, k);

    // c.)
    // int i = 7; int j = 8; int k = 9;
    // printf("%d\n", (i = j) || (j = k));
    // printf("%d %d %d\n", i, j, k);

    // d.)
    // int i = 1; int j = 1; int k = 1;
    // printf("%d\n", ++i || ++j && ++k);
    // printf("%d %d %d\n", i, j, k);



    // return 0;

    // PROGRAMMING PROJECTS

    // 1.

    // int num;

    // printf("\nEnter a number: ");
    // scanf("%d", &num);

    // if (num / 1000 != 0)
    //     printf("The number %d has 4 digits\n", num);
    // else if (num / 100 != 0)
    //     printf("The number %d has 3 digits\n", num);
    // else if (num / 10 != 0)
    //     printf("The number %d has 2 digits\n", num);
    // else
    //     printf("The number %d has 1 digit\n", num);

    // 2. 

    // int hour, min;
    // _Bool pm;

    // printf("\nEnter a 24-hour time: ");
    // scanf("%d:%d", &hour, &min);

    // if (hour == 12) {
    //     pm = 1;
    // }
    // else if (hour / 12 > 0) {
    //     hour %= 12;
    //     pm = 1;
    // }
    // else {
    //     pm = 0;
    // }
        
    
    // printf("Equivalent 12-hour time: %d:%d %s\n", hour, min, (pm ? "PM" : "AM"));

    // 3.

    // int num_shares;
    // float share_price, commission, value, rival_commission;

    // printf("\nEnter number of shares: ");
    // scanf("%d", &num_shares);

    // printf("\nEnter price per share: ");
    // scanf("%f", &share_price);

    // value = num_shares * share_price;

    // if (value < 2500.00f)
    //     commission = 30.00f + 0.17f * value;
    // else if (value < 6250.00f)
    //     commission = 56.00f + 0.0066f * value;
    // else if (value < 20000.00f)
    //     commission = 76.00f + 0.0034f * value;
    // else if (value < 50000.00f)
    //     commission = 100.00f + 0.0022f * value;
    // else if (value < 500000.00f)
    //     commission = 155.00f + 0.0011f * value;
    // else
    //     commission = 255.00f + 0.0009f * value;

    // if (commission < 39.00f)
    //     commission = 39.00f;

    // if (num_shares < 2000)
    //     rival_commission = 33.00f + (num_shares * 0.03f);
    // else
    //     rival_commission = 33.00f + (num_shares * 0.02f);

    // printf("Commission: $%.2f\n", commission);
    // printf("Rival's commission: $%.2f\n", rival_commission);


    // return 0;

    // 4.

    // int spd;

    // printf("\nEnter wind speed in knots: ");
    // scanf("%d", &spd);

    // if (spd < 1){
    //     printf("Calm\n");
    // }
    // else if (spd <= 3){
    //     printf("Light air\n");
    // }
    // else if (spd <= 27){
    //     printf("Breeze\n");
    // }
    // else if (spd <= 47){
    //     printf("Gale\n");
    // }
    // else if (spd <= 63){
    //     printf("Storm\n");
    // }
    // else {
    //     printf("Hurricane\n");
    // }

    // float income, tax;

    // printf("\nEnter income: $");
    // scanf("%f", &income);

    // if (income <= 750){
    //     tax = income * .01f;
    // }
    // else if (income <= 2250){
    //     tax = 7.50f + ((income - 750) * 0.02f);
    // }
    // else if (income <= 3750){
    //     tax = 37.50f + ((income - 2250) * 0.03f);
    // }
    // else if (income <= 5250){
    //     tax = 82.50f + ((income - 3750) * 0.04f);
    // }
    // else if (income <= 7000){
    //     tax = 142.50f + ((income - 5250) * 0.05f);
    // }
    // else {
    //     tax = 230 + ((income - 7000) * 0.06f);
    // }

    // printf("Amount of tax: $%.2f\n", tax);

    // int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, chk, 
    // first_sum, second_sum, total;

    // printf("\nEnter the first (single) digit: ");
    // scanf("%1d", &d);
    // printf("Enter first group of five digits: ");
    // scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    // printf("Enter second group of five digits: ");
    // scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    // printf("Enter check digit: ");
    // scanf("%1d", &chk);

    // first_sum = d + i2 + i4 + j1 + j3 + j5;
    // second_sum = i1 + i3 + i5 + j2 + j4;
    // total = 9 - (((3 * first_sum + second_sum) - 1) % 10);

    // printf("%s\n", total == chk ? "VALID" : "NOT VALID");

    // int i1, i2, i3, i4, smallest, largest;

    // printf("\nEnter four integers: ");
    // scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

    
    
    // if (i1 > i2){
    //     largest = i1;
    //     smallest = i2;
    // }
    // else {
    //     largest = i2;
    //     smallest = i1;
    // }

    // if (largest > i3){
    //     if (i3 < smallest){
    //         smallest = i3;
    //     }
    // }
    // else {
    //     largest = i3;
    // }
        
    // if (largest > i4){
    //     if (i4 < smallest){
    //         smallest = i4;
    //     }
    // }

    // smallest = i1;
    // largest = i1;

    // if (i2 < smallest) {
    //     smallest = i2;
    // }
    // else {
    //     largest = i2;
    // }

    // if (i3 < smallest){
    //     smallest = i3;
    // }
    // else if (i3 > largest){
    //     largest = i3;
    // }

    // if (i4 < smallest){
    //     smallest = i4;
    // }
    // else if (i4 > largest){
    //     largest = i4;
    // }

    // printf("Largest: %d\n", largest);
    // printf("Smallest: %d\n", smallest);

    // 8.

    // int hr, mins, u_time, dep_time;

    // printf("\nEnter a 24-hour time: ");
    // scanf("%d:%d", &hr, &mins);

    // u_time = (hr * 60) + mins;

    // if (u_time < 531){
    //     printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    // }
    // else if (u_time < 631){
    //     printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    // }
    // else if (u_time < 723){
    //     printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    // }
    // else if (u_time < 803){
    //     printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    // }
    // else if (u_time < 892){
    //     printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    // }
    // else if (u_time < 1041){
    //     printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    // }
    // else if (u_time < 1222){
    //     printf("Closest departure time is 7 p.m., arriving at 9:20 p.m.\n");
    // }
    // else {
    //     printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    // }

    // 9.

    // int yr1, mth1, day1, yr2, mth2, day2;

    // printf("\nEnter first date (mm/dd/yy): ");
    // scanf("%d/%d/%d", &mth1, &day1, &yr1);
    // printf("Enter second date (mm/dd/yy): ");
    // scanf("%d/%d/%d", &mth2, &day2, &yr2);

    // if (yr1 < yr2){
    //     printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mth1, day1, yr1, mth2, day2, yr2);
    // }
    // else if (yr2 < yr1){
    //     printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mth2, day2, yr2, mth1, day1, yr1);
    // }
    // else {
    //     if (mth1 < mth2){
    //         printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mth1, day1, yr1, mth2, day2, yr2);
    //     }
    //     else if (mth2 < mth1){
    //         printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mth2, day2, yr2, mth1, day1, yr1);
    //     }
    //     else {
    //         if (day1 < day2){
    //             printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mth1, day1, yr1, mth2, day2, yr2);
    //         }
    //         else {
    //             printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mth2, day2, yr2, mth1, day1, yr1);
    //         }
    //     }
    // }

    // 10.

    // int grd, tens, ones;

    // printf("\nEnter numerical grade: ");
    // scanf("%d", &grd);

    // if (grd > 100 || grd < 0){
    //     printf("Because the grade entered was not in the range of 0-100, this tool will not provide an accurate result.\n");
    // }

    // tens = grd / 10;

    // switch (tens){
    //     case 9:
    //         printf("Letter grade: A\n");
    //         break;
    //     case 8:
    //         printf("Letter grade: B\n");
    //         break;
    //     case 7:
    //         printf("Letter grade: C\n");
    //         break;
    //     case 6:
    //         printf("Letter grade: D\n");
    //         break;
    //     default:
    //         printf("Letter grade: F\n");
    //         break;
    // }

    // 11.

    int num, tens, ones;
    printf("\nEnter a two-digit number: ");
    scanf("%d", &num);

    tens = num / 10;
    ones = num % 10;

    switch (tens){
        case 9:
            printf("You entered the number ninety");
            break;
        case 8:
            printf("You entered the number eighty");
            break;
        case 7:
            printf("You entered the number seventy");
            break;
        case 6:
            printf("You entered the number sixty");
            break;
        case 5:
            printf("You entered the number fifty");
            break;
        case 4:
            printf("You entered the number forty");
            break;
        case 3:
            printf("You entered the number thirty");
            break;
        case 2:
            printf("You entered the number twenty");
            break;
        case 1:
            switch (ones){
                case 9:
                    printf("You entered the number nineteen.\n");
                    break;
                case 8:
                    printf("You entered the number eighteen.\n");
                    break;
                case 7:
                    printf("You entered the number seventeen.\n");
                    break;
                case 6:
                    printf("You entered the number sixteen.\n");
                    break;
                case 5:
                    printf("You entered the number fifteen.\n");
                    break;
                case 4:
                    printf("You entered the number fourteen.\n");
                    break;
                case 3:
                    printf("You entered the number thirteen.\n");
                    break;
                case 2:
                    printf("You entered the number twelve.\n");
                    break;
                case 1:
                    printf("You entered the number eleven.\n");
                    break;
                case 0:
                    printf("You entered the number ten.\n");
                    break;
            }
    }
    if (tens > 2){
        switch (ones){
            case 9:
                printf("-nine.\n");
                break;
            case 8:
                printf("-eight.\n");
                break;
            case 7:
                printf("-seven.\n");
                break;
            case 6:
                printf("-six.\n");
                break;
            case 5:
                printf("-five.\n");
                break;
            case 4:
                printf("-four.\n");
                break;
            case 3:
                printf("-three.\n");
                break;
            case 2:
                printf("-two.\n");
                break;
            case 1:
                printf("-one.\n");
                break;
            case 0:
                printf(".\n");
                break;        
        }
    }

    return 0;
}