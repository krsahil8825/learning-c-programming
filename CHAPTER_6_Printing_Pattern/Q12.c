// write a program to print the following pattern like below

// * * * * * * *
// *           *
// *           *
// * * * * * * *

// solution
#include <stdio.h>

// main function
int main()
{
    // inisalized variable
    int length, breadth;

    printf("This program prints hollow rectangle\n");

    // taking input from user
    printf("Enter the length: ");
    scanf("%d", &length);

    // taking input from user
    printf("Enter the breadth: ");
    scanf("%d", &breadth);

    // created loop for print the pattern
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= breadth; j++)
        {
            if (i == 1 || i == length || j == 1 || j == breadth)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}