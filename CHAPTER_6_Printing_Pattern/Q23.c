// write a program to print the following pattern with numbers which is given below
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <stdio.h>

int main()
{
    // crated variable
    int i, j, k, length;

    // it is used to print the numbers
    int l;

    // taking input from user
    printf("Enter the value of length:- ");
    scanf("%d", &length);

    // created loop and logic for printing the pattern
    for (i = 1; i <= length; i++)
    {
        // assigned length value to k
        k = length + 1 - i;

        // initialize value to l variable
        l = 1;

        /*
        The below for loop print this
              1
            1 2
          1 2 3
        1 2 3 4

        */

        for (j = 1; j <= length; j++)
        {
            if (j >= k)
            {
                printf("%d ", l);
                l++;
            }
            else
            {
                printf("  ");
            }
        }

        l = i - 1; // l variable is reused in next for loop

        /*
        The below for loop print this

                //in this line nothing is printed
        1
        2 1
        3 2 1

        */

        for (k = 1; k < i; k++)
        {
            printf("%d ", l--);
        }

        printf("\n");
    }

    return 0;
}