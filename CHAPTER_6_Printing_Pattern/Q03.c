// write a program to print right triangle patterns with star like below

// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

// solution:
#include <stdio.h>

// main function
int main()
{
    // variable declaration
    int height;
    int breadth = 1;

    // user instruction
    printf("This program print right trangle patterns with star\n");

    // taking input from user
    printf("Enter the Height in number:- ");
    scanf("%d", &height);

    // loop to print pattern
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= breadth; j++)
        {
            printf("* ");
        }
        printf("\n");
        breadth++;
    }
    return 0;
}