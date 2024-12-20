// write a program to print following pattern with numbers likie below
// 1 
// 2  3 
// 4  5  6 
// 7  8  9  10 
// 11 12 13 14 15 

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
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}