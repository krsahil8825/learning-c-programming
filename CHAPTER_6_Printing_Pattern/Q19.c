// write a program to print the following pattern with star which is given below
//         A 
//       A B 
//     A B C 
//   A B C D 
// A B C D E 

#include <stdio.h>

int main()
{
    // crated variable
    int i, j, k, length;

    // created character variable whose value is "A" as per ASCII
    char letter = 65;

    // taking input from user
    printf("Enter the value of length:- ");
    scanf("%d", &length);

    // assigned length value to k
    k = length;

    // created loop and logic for printing the pattern
    for (i = 1; i <= length; i++)
    {
        for (j = 1; j <= length; j++)
        {
            if (j >= k)
            {
                printf("%c ", letter++);
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
        letter = 65;
        k--;
    }

    return 0;
}