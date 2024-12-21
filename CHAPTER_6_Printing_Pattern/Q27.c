// write a program to print the following pattern with numbers which is given below
// 1 2 3 4 5 6 7 8 9 
// 1 2 3 4   6 7 8 9 
// 1 2 3       7 8 9 
// 1 2           8 9 
// 1               9 

#include <stdio.h>

int main()
{
    // declearing variables
    int length, invisible_number_or_spaces, visible_number, natural_number, i, j;

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
    natural_number = 1;
    visible_number = length - 1;
    invisible_number_or_spaces = 1;

    // this loop prints first line only
    for (i = 1; i <= length + length - 1; i++)
    {
        printf("%d ", natural_number++);
    }

    // printing new line
    printf("\n");

    // this loop prints pattern from second line
    for (i = 1; i < length; i++)
    {
        // initalizing this variable again to reuse it
        natural_number = 1;

        // this loop print stars
        for (j = 1; j <= visible_number; j++)
        {
            printf("%d ", natural_number++);
        }

        // this loop prints spaces
        for (j = 1; j <= invisible_number_or_spaces; j++)
        {
            printf("  ");
            natural_number++;
        }

        // this loop prints stars
        for (j = 1; j <= visible_number; j++)
        {
            printf("%d ", natural_number++);
        }

        // increment and decrement and new line according to logic of pattern
        printf("\n");
        invisible_number_or_spaces += 2;
        visible_number--;
    }

    return 0;
}