// write a program to print a rectangular pattern with star

// solution:
#include <stdio.h>

// main function
int main()
{

    // variable declaration
    int length, breadth;

    // user instruction
    printf("This program print rectangular patterns with star\n");

    // taking input from user
    printf("Enter the Length in number:- ");
    scanf("%d", &length);

    // taking input from user
    printf("Enter the Breadth in number:- ");
    scanf("%d", &breadth);

    // loop to print pattern
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= breadth; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}