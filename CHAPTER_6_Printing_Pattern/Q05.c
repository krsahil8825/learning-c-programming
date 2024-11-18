// write a program to print the following pattern like below

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6 

// solution:
#include <stdio.h>

// main function
int main()
{

    // variable declaration
    int height;
    int Number = 1;

    // user instruction
    printf("This program print right trangle patterns with numbers\n");

    // taking input from user
    printf("Enter the Height in number:- ");
    scanf("%d", &height);

    // loop to print pattern
    while (Number <= height)
    {
        for (int i = 1; i <= Number; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
        Number++;
    }
    return 0;
}