// calculate income tax paid by an employ to the
// government as per the slabs mantion below

// Income slab      tax
// below 2.5L       no tax
// 2.5L - 5.0L      5%
// 5.0L - 10.0L     20%
// above 10.0L      30%

// take income amount input from user

#include <stdio.h>

int main()
{
    printf("this program help us to find how much tax you have to pay\n");

    // user instruction
    printf("This program give rough value");

    // creating variable
    int income;
    float tax;

    // taking  input from user
    printf("Enter your income ammount\n");
    scanf("%d", &income);

    // checking tax condition
    // calculating tax
    // giving output of tax
    if (income >= 1000000)
    {
        printf("You have to pay 30 percent tax\n");
        tax = tax + 0.30 * (income - 250000);
        printf("you have to pay %f ammount of tax", tax);
    }
    else if (income >= 500000)
    {
        printf("You have to pay 20 percent tax\n");
        tax = tax + 0.20 * (income - 250000);
        printf("you have to pay %f ammount of tax", tax);
    }
    else if (income >= 250000)
    {
        printf("You have to pay 5 percent tax\n");
        tax = tax + 0.05 * (income - 250000);
        printf("you have to pay %f ammount of tax", tax);
    }
    else if (income < 250000)
    {
        printf("You income is to low you dont need to pay tax\n");
    }
    else
    {
        printf("Enter a valid amount");
    }

    return 0;
}