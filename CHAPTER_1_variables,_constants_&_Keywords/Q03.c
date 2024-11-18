// write a program that convert celcius into fahrenheit

#include <stdio.h>

int main()
{
    printf("This program help us to change celcius to farenhight\n");

    // creating variable
    int celcius;

    // taking input from user
    printf("Enter the value of temperature in celcius\n");
    scanf("%d", &celcius);

    // calculating and printing temperature
    float fahrenheit = (celcius * (9.0 / 5.0)) + 32.0;
    printf("The value of temprature in fahrenheit is %f\n", fahrenheit);
    return 0;
}