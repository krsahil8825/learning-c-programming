// write code to calculate simple intrest 
// and total amount i.e. simple intrest + principal

#include <stdio.h>

int main()
{
    printf("This program help us to calculate simple intrest\n");

    // creating variable
    int principal, rate, time_in_year;

    // taking input from user
    printf("Enter the value of principal\n");
    scanf("%d", &principal);

    // taking input from user
    printf("Enter the value of rate\n");
    scanf("%d", &rate);

    // taking input from user
    printf("Enter the value of time in year\n");
    scanf("%d", &time_in_year);

    // calculating and printing principal interest
    float simple_intrest = (principal * rate * time_in_year) / 100;
    printf("The simple intrest is %fRs.\n", simple_intrest);

    // calculating and printing total money
    float total_money = simple_intrest + principal;
    printf("Total ammount is %fRs.\n", total_money);

    return 0;
}