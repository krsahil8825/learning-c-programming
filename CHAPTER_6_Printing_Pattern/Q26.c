// write a program to print the following pattern with star which is given below
// * * * * * * * * *
// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *

#include <stdio.h>

int main()
{
    // declearing variables
    int length, number_of_spaces, number_of_star1, number_of_star2, i, j;

    // taking input from user
    printf("Enter the length (enter odd number, if you enter even it is increased by 1):- ");
    scanf("%d", &length);

    // checking if number is odd it incressed by 1
    if (length % 2 == 0)
    {
        length++;
        printf("length is increased by 1 because you enterd even number now length is = %d\n", length);
    }

    // initalizing variables
    number_of_star1 = length - 1;
    number_of_star2 = length - 1;
    number_of_spaces = 1;

    // this loop prints first line only
    for (i = 1; i <= length + length - 1; i++)
    {
        printf("* ");
    }

    // printing new line
    printf("\n");

    // this loop prints pattern from second line
    for (i = 1; i < length; i++)
    {
        // this loop print stars
        for (j = 1; j <= number_of_star1; j++)
        {
            printf("* ");
        }

        // this loop prints spaces
        for (j = 1; j <= number_of_spaces; j++)
        {
            printf("  ");
        }

        // this loop prints stars
        for (j = 1; j <= number_of_star2; j++)
        {
            printf("* ");
        }

        // increment and decrement and new line according to logic of pattern
        printf("\n");
        number_of_spaces += 2;
        number_of_star1--;
        number_of_star2--;
    }

    return 0;
}