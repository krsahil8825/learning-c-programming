#include <stdio.h>

int main()
{
    int length, breadth;
    int number = 1;
    printf("This program print rectangular patterns with numbers\n");

    printf("Enter the Length in number:- ");
    scanf("%d", &length);
    printf("Enter the Breadth in number:- ");
    scanf("%d", &breadth);

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= breadth; j++)
        {
            printf("%d", number);
            number++;
        }
        printf("\n");
        number = 1;
    }
    return 0;
}