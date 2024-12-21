// Try question  no 3rd again by using call by value and verify that it does not change the value of
// the said variable.

// calling function by value does not change the value of 
// the passed variable. 
// below code demonstrate this Question practically

#include <stdio.h>

// function prototype
int tentimes(int x);

int main()
{
    // user instruction
    printf("This program is written for checking if function is call by value can it change the value of passed/said variable or not\n");

    // created this variable to store input from user and function return value
    int a, b;

    // taking input from uset
    printf("Enter a number:- ");
    scanf("%d", &a);

    b = tentimes(a); // calling function by refrence

    printf("The value of a =%d\n", a);

    if (a == b)
    {
        printf("Calling function by value is able change the value of passing/said variable\n");
    }
    else
    {
        printf("Calling function by value can not able change the value of passing/said variable\n");
    }

    return 0;
}

// function defination
int tentimes(int x)
{
    int y = 10;

    // multiplying *x with 10
    x = x * 10;
    printf("The value of x = %d\n", x);
    return x;
}