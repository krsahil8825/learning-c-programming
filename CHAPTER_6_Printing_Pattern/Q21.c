// write a program to print the following pattern with star which is given below
//         1 
//       1 2 3 
//     1 2 3 4 5 
//   1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 8 9 

#include <stdio.h>

int main()
{
    // crated variable
    int i, j, length;

    // taking input from user
    printf("Enter the value of length:- ");
    scanf("%d", &length);

    int no_of_spaces = length - 1, no_of_stars = 1;
    // created loop and logic for printing the pattern

    for (i = 1; i <= length; i++)
    {
        // this loop pint spaces
        for (j = 1; j <= no_of_spaces; j++)
        {
            printf("  ");
        }
        no_of_spaces--;

        // this loop print numbers
        for (j = 1; j <= no_of_stars; j++)
        {
            printf("%d ", j);
        }
        no_of_stars += 2;

        printf("\n");
    }

    return 0;
}