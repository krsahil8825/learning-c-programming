// write a program to print the following pattern like below

// 1 2 3 4 5 6 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

// solution:
#include <stdio.h>

// main function
int main()
{
    // variable declaration
    int height;
    int Number;

    // user instruction
    printf("This program print downward facing right trangle patterns with numbers\n");
    
    // taking input from user
    printf("Enter the Height in number:- ");
    scanf("%d", &height);

    // loop to print pattern
    while (height >= 1)
    {
        for (int i = 1; i <= height; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
        height--;
    }
    return 0;
}