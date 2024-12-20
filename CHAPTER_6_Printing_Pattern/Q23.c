// write a program to print the following pattern with numbers which is given below
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <stdio.h>

int main()
{
     // crated variable
    int i, j, length;
    
    // it is use to print decreasing numbers in 3rd for loop
    int decreaing_no;

    // taking input from user
    printf("Enter the value of length:- ");
    scanf("%d", &length);

    int no_of_spaces = length - 1;
    // created loop and logic for printing the pattern

    for (i = 1; i <= length; i++)
    {
        // this loop pint spaces
        for (j = 1; j <= no_of_spaces; j++)
        {
            printf("  ");
        }
        no_of_spaces--;

        // this loop print numbers in increasing order
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        // initalizing this variable of next loop
        decreaing_no = i -1;

        // this loop print numbers in decresing order
        for (j = 1; j < i; j++)
        {
            printf("%d ", decreaing_no--);
        }
        
        printf("\n");
    }

    return 0;
}