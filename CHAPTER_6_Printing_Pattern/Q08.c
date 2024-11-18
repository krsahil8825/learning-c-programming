// write a program to print rectangular patterns with numbers

// used ASCII value of A to Z to print the pattern

// solution:
#include <stdio.h>

// main function
int main()
{
    // variable declaration
    int length, breadth;
    char letter = 65;

    // user instruction
    printf("This program print rectangular patterns with letters\n");

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
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
        letter = 65;
    }
    return 0;
}