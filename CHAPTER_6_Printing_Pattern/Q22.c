// write a program to print the following pattern with letters which is given below
//         A 
//       A B C 
//     A B C D E 
//   A B C D E F G 
// A B C D E F G H I 

#include <stdio.h>

int main()
{
    // crated variable
    int i, j, length;

    // created character variable whose value is "A"
    // as per ASCII
    char letter = 65;

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
            printf("%c ", letter + j -1);
        }
        no_of_stars += 2;

        printf("\n");
    }

    return 0;
}