// write a program to print the following pattern

// solution:
#include <stdio.h>

// main function
int main()
{
    // variable declaration
    int height;
    int Number;

    // user instruction
    printf("This program print right trangle patterns with star\n");
    
    // taking input from user
    printf("Enter the Height in number:- ");
    scanf("%d", &height);

    // loop to print pattern
    while (height >= 1)
    {
        for (int i = 1; i <= height; i++)
        {
            printf("%d", i);
        }
        printf("\n");
        height--;
    }
    return 0;
}