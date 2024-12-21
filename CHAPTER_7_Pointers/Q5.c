// Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

// function prototype
void add_and_average(int *x, int *y);

int main()
{
    // user instruction
    printf("This program is used to find add and average of two numbers using pointer to print\nthe output and please enter even numbers or those number whoose sum is even\n");

    // created this variable to store input from user
    int a, b;

    // taking input from uset
    printf("Enter first number:- ");
    scanf("%d", &a);
    printf("Enter second number:- ");
    scanf("%d", &b);

    add_and_average(&a, &b); // calling function by refrence

    // printing the value of a and b after passing to function
    printf("The value of sum = %d and average = %d\n", a, b);

    return 0;
}

// function defination
void add_and_average(int *x, int *y)
{
    int dummy1 = *x, dummy2 = *y;

    // addition is performed here
    *x = dummy1 + dummy2;

    // average finding after addition
    *y = *x / 2;

    
}