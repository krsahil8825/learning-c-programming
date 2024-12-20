// write a program to print a "X" sign pattern with star likie below
// *       *
//   *   *
//     *
//   *   *
// *       *

#include <stdio.h>

int main()
{
    // creating variable
    int i, j, k, length;

    // taking input from user
    printf("Enter the Value of Length:- ");
    scanf("%d", &length);

    // assigning value to k variable
    k = length;

    // created loop for printing the given pattern
    for (i = 1; i <= length; i++)
    {
        for (j = 1; j <= length; j++)
        {
            if (i == j || k == j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        k--;
        printf("\n");
    }

    return 0;
}