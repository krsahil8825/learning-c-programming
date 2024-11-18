// write a program to print rectangular patterns with numbers like below

// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 

// solution:
#include <stdio.h>

// main function
int main()
{
    // variable declaration
    int length, breadth;
    int number = 1;

    // user instruction
    printf("This program print rectangular patterns with numbers\n");

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
            printf("%d ", number);
            number++;
        }
        printf("\n");
        number = 1;
    }
    return 0;
}