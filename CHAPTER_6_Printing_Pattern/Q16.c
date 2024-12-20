// write a program to print following pattern with numbers likie below
// 1
// 0 1
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1

#include <stdio.h>

int main()
{
    // declearing variable
    int i, j, k = 1, length;

    // taking input from user
    printf("Enter the velue of length:- ");
    scanf("%d", &length);

    // bulding logic using loop to print the pattern
    for (i = 1; i <= length; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (k % 2 == 0)
            {
                printf("%d ", k);
                k++;
            }
            else
            {
                printf("%d ", k);
                k--;
            }
        }
        printf("\n");
    }

    return 0;
}