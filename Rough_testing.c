#include <stdio.h>

int main()
{
    int number, loop_count, minimum, i, j, a, b;

    // taking input from user
    printf("Enter the number:- ");
    scanf("%d", &number);

    loop_count = number + number - 1;

    for (i = 1; i <= loop_count; i++)
    {

        for (j = 1; j <= loop_count; j++)
        {
            a = i;
            if (i > number)
            {
                a = number + number - i;
            }

            b = j;
            if (j > number)
            {
                b = number + number - j;
            }

            if (a <= b)
            {
                minimum = a;
            }
            else
            {
                minimum = b;
            }
            printf("%d", minimum);
        }
        printf("\n");
    }

    return 0;
}