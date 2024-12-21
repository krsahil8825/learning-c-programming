// Write a function and pass the value by reference. 

#include <stdio.h>

// function prototype
void swap(int *x, int *y);

int main()
{
    // user instruction
    printf("This program is used to swap value of a to b and b to a\n");
    
    // created this variable to store input from user
    int a, b;

    // taking input from uset
    printf("Enter first number(a):- ");
    scanf("%d", &a);
    printf("Enter second number(b):- ");
    scanf("%d", &b);

    // printing the value of a and b before passing to function
    printf("The value of a = %d and b= %d before swaping\n", a, b);

    swap(&a, &b); // calling function by refrence

    // printing the value of a and b after passing to function
    printf("The value of a = %d and b= %d after swaping\n", a, b);

    return 0;
}

// function defination
void swap(int *x, int *y)
{
    int dummy;

    // swaping value of *x to *y and *y to *x
    dummy = *x;
    *x = *y;
    *y = dummy;
}