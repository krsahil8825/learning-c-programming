// write a program to print the following pattern like below

// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
// A B C D E F 
// A B C D E F G 
// A B C D E F G H 

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
    printf("This program print right trangle patterns with letters\n");

    // taking input from user
    printf("Enter the Height in number:- ");
    scanf("%d", &height);

    // loop to print pattern
    while (Number <= height)
    {
        letter = 65;
        for (int i = 1; i <= Number; i++)
        {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
        Number++;
    }
    return 0;
}