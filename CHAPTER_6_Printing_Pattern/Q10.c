// write a program to print the following pattern like below

// 1 
// A B 
// 1 2 3 
// A B C D 
// 1 2 3 4 5 
// A B C D E F 
// 1 2 3 4 5 6 7 

// ASCII value is used to print the alphabets

// solution:
#include <stdio.h>

// main function
int main()
{

    // variable declaration
    int height;
    int Number = 1;
    char letter = 65;

    // user instruction
    printf("This program print right trangle patterns with numbers and letters\n");

    // taking input from user
    printf("Enter the Height in number:- ");
    scanf("%d", &height);

    // loop to print pattern
    while (Number <= height)
    {
        if (Number % 2 == 0)
        {
            letter = 65;
            for (int i = 1; i <= Number; i++)
            {
                printf("%c ", letter);
                letter++;
            }
            printf("\n");
        }
        
        else if ((Number % 2) != 0)
        {
            for (int i = 1; i <= Number; i++)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
        Number++;
        
    }
    return 0;
}