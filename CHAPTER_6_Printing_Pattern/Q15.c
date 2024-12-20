// write a program to print following pattern with numbers likie below
// 1 
// 3 5 
// 7 9 11 
// 13 15 17 19 
// 21 23 25 27 29 

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
            k+= 2;
        }
        printf("\n");
    }

    return 0;
}