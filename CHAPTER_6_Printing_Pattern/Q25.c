// write a program to print the following pattern with star which is given below
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include <stdio.h>

int main()
{
    // decleared variable
    int length, no_of_spaces, no_of_stars = 1, divide_length_by2, i, j;

    // taking input from user
    // addition of 1 to the number when user input even number takes place in that loop which prints 
    // pattern in downward direction
    printf("Enter The length (enter odd numbers for better output, if you enter even number it add 1 to that number):- ");
    scanf("%d", &length);

    // checking the input length is it odd or even and then depending upon condition dividing length by 2
    if (length % 2 == 0)
    {
        divide_length_by2 = length / 2;
    }
    else
    {
        divide_length_by2 = (length - 1) / 2;
    }

    // assign value to number of spaces
    no_of_spaces = divide_length_by2;

    // ============ this loop print the pattern in downward direction ============

    // this loop runs {"(length-1) / 2" [for odd numbers] or "length / 2" [for even numbers]} times
    // i.e if length is 5 then this loop runs only 2 times
    for (i = 1; i <= divide_length_by2; i++)
    {
        // this loop print spaces
        for (j = 1; j <= no_of_spaces; j++)
        {
            printf("  ");
        }

        // this loop prints the stars
        for (j = 1; j <= no_of_stars; j++)
        {
            printf("* ");
        }

        // this loop also prints the star
        for (j = 1; j < i && j <= divide_length_by2; j++)
        {
            printf("* ");
        }

        // increment - decrement and new line
        no_of_stars++;
        no_of_spaces--;
        printf("\n");
    }

    // ============= this loop print the pattern in downward direction =============

    //  here "divide_length_by2 +1" is because (divide_length_by2 + divide_length_by2) is not equal to length
    //  so 1 is added
    // this loop runs {"((length-1) / 2) + 1" [for odd numbers] or "(length / 2) + 1" [for even numbers]} times
    // i.e if length is 5 then this loop runs only 2 times
    // one extra line will be printed if user enterd even number due to "divide_length_by2 + 1" so, here addition occurs for even numbers to get better output
    for (i = 1; i <= divide_length_by2 + 1; i++)
    {
        // this loop prints the spaces

        for (j = 1; j <= no_of_spaces; j++)
        {
            printf("  ");
        }

        // this loop prints the star
        for (j = 1; j <= no_of_stars; j++)
        {
            printf("* ");
        }

        // this loop also prints the star
        for (j = divide_length_by2; j >= i; j--)
        {
            printf("* ");
        }

        // increment - decrement and new line
        no_of_stars--;
        no_of_spaces++;
        printf("\n");
    }

    return 0;
}