// Write a program to print the value of a variable i by using “pointer to pointer” type 
// of variable. 

#include <stdio.h>

int main()
{
    // user instruction
    printf("This program is used to print the value of i that is enter by user using pointer to pointer\n");

    // created this variable to store input from user
    int i;
    int *j = &i, **k = &j;

    printf("Enter a number:- ");
    scanf("%d", &i);

    printf("The value of i printed using pointer to pointer is %d\n", **k);

    return 0;
}