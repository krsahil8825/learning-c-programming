// write a program to print the following pattern with letters which is given below
// A B C D E F G H I 
// A B C D   F G H I 
// A B C       G H I 
// A B           H I 
// A               I 

#include <stdio.h>

int main()
{
    // declearing variables
    int length, invisible_letters_or_spaces, visible_letters, i, j;

    char letters;

    // taking input from user
    printf("Enter the length (enter odd number, if you enter even it is increased by 1):- ");
    scanf("%d", &length);

    // checking if number is odd it incressed by 1
    if (length % 2 == 0)
    {
        length++;
        printf("length is increased by 1 because you enterd even number now length is = %d\n", length);
    }

    // initalizing variables
    letters = 65;
    visible_letters = length - 1;
    invisible_letters_or_spaces = 1;

    // this loop prints first line only
    for (i = 1; i <= length + length - 1; i++)
    {
        printf("%c ", letters++);
    }

    // printing new line
    printf("\n");

    // this loop prints pattern from second line
    for (i = 1; i < length; i++)
    {
        // initalizing this variable again to reuse it
        letters = 65;

        // this loop print stars
        for (j = 1; j <= visible_letters; j++)
        {
            printf("%c ", letters++);
        }

        // this loop prints spaces
        for (j = 1; j <= invisible_letters_or_spaces; j++)
        {
            printf("  ");
            letters++;
        }

        // this loop prints stars
        for (j = 1; j <= visible_letters; j++)
        {
            printf("%c ", letters++);
        }

        // increment and decrement and new line according to logic of pattern
        printf("\n");
        invisible_letters_or_spaces += 2;
        visible_letters--;
    }

    return 0;
}