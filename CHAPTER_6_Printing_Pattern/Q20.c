// write a program to print the following pattern with star which is given below
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include <stdio.h>

int main()
{
    // crated variable
    int i, j, k, length;

    // taking input from user
    printf("Enter the value of length:- ");
    scanf("%d", &length);

    // created loop and logic for printing the pattern
    for (i = 1; i <= length; i++)
    {
        // assigned length value to k
        k = length + 1 - i;
        for (j = 1; j <= length; j++)
        {
            if (j >= k)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        for (k = 1; k < i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}