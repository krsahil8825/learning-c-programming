// write a program to print following pattern with numbers likie below
// 1
// 0 1
// 1 0 1 
// 0 1 0 1
// 1 0 1 0 1

#include <stdio.h>

int main()
{
    // declearing variable
    int i, j, k, length;

    // taking input from user
    printf("Enter the velue of length:- ");
    scanf("%d", &length);

    // bulding logic using loop to print the pattern
    for (i = 1; i <= length; i++)
    {

        // here this condition check the row will start from 0 or 1
        if (i % 2 == 0)
        {
            k = 0;
        }
        else
        {
            k = 1;
        }

        // loop for printing the pattern in a single row
        for (j = 1; j <= i; j++)
        {

            printf("%d ", k);

            if (k == 1)
            {
                k = 0;
            }
            else if (k == 0)
            {
                k = 1;
            }
        }

        printf("\n");
    }

    return 0;
}