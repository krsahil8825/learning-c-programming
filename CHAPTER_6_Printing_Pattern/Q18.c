// write a program to print the following pattern with star which is given below
//       * * * * 
//     * * * * 
//   * * * * 
// * * * * 

#include <stdio.h>

int main()
{
    // creating variable
    int i, j, k, length;

    // taking input from user
    printf("Enter the value of length:- ");
    scanf("%d", &length);

    // created logic and loop for print the pattern
    for (i = 1; i <= length; i++)
    {
        // assigning valu to k
        k = length + 1 - i;

        // loops for printing space
        for (j = 1; j < k; k--)
        {
            printf("  ");
        }

        // loop for printing *
        for (j = 1; j <= length; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}