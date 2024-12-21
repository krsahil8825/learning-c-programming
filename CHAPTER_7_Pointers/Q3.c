// Write a program to change the value of a variable to ten times of its current
// value.

#include <stdio.h>

// function prototype
void tentimes(int *x);

int main()
{
    // created this variable to store input from user
    int a;

    // taking input from uset
    printf("Enter a number:- ");
    scanf("%d", &a);

    tentimes(&a); // calling function by refrence

    printf("Ten times of the number =%d\n", a);

    return 0;
}

// function defination
void tentimes(int *x)
{
    int y = 10;

    // multiplying *x with 10
    *x = *x * 10;
}