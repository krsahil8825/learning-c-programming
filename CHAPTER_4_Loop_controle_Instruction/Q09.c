// repeat question no 8 using while loop
// Write a program to calculate the factorial
// for a given numbet using for loop

#include <stdio.h>

int main()
{
    printf("This program is used to calculate factorial of given number\n");

    // making two variable number1 and factorial
    // number1 is used for taking and storing input of user
    // until it gows in loop. factorial is used for storing
    // calculating factorials in loop
    int number1, factorial = 1;

    // here we grt input from user
    printf("Enter a number\n");
    scanf("%d", &number1);

    // here i created loop for calculating factorials
    // in loop number value is keep decreasing until it become 1
    while (number1 >= 1)
    {
        factorial = factorial * number1;
        number1--;
    }

    // printing the value of factorials that calculated above
    printf("the factorial is %d\n", factorial);
    return 0;
}