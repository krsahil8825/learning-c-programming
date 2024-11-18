// write a recursive function to calculate the sum
// of first n natural number

#include <stdio.h>

// function prototype
int adding_natural_number(int a);

// main function
int main()
{
    // user instruction
    printf("This function help us to find sum of all natural number bwtween given number\n");

    // created number variable to store natural number input from user
    int number;

    // taking inpur from user
    printf("Enter a natural mumber: ");
    scanf("%d", &number);

    // calling and printing that function i created
    printf("The sum of all natural number between 1 to %d\n is %d", number, adding_natural_number(number));

    return 0;
}

// function defination
int adding_natural_number(int a)
{
    // created adding_number variable to calculate the sum
    int adding_number;

    // created if statement to calcutate the sum
    // in this if statement i used recursion
    if (a == 1)
    {
        return 1;
    }
    else
    {
        adding_number = a + adding_natural_number(a - 1);
    }

    // returning adding_number
    return adding_number;
}