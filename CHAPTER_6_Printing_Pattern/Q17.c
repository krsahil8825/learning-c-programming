// write a program to print the following pattern with star which is given below
//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 

#include <stdio.h>

int main()
{
    // crated variable
    int i, j, k, length;

    // taking input from user
    printf("Enter the value of length:- ");
    scanf("%d", &length);

    // assigned length value to k
    k = length;

    // created loop and logic for printing the pattern
    for (i = 1; i <= length; i++)
    {
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

        printf("\n");
        k--;
    }

    return 0;
}