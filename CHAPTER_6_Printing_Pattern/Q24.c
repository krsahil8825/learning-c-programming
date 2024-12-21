// write a program to print the following pattern with numbers which is given below
//         A 
//       A B A 
//     A B C B A 
//   A B C D C B A 
// A B C D E D C B A 

#include <stdio.h>

int main()
{
    // crated variable
    int i, j, length;

    // it is use to print letters in assending order "A --> Z" in 2nd for loop
    // initelised the value = A using ASCII
    char assending_letters;

    // it is use to print letters in dessending order "Z --> A" in 3rd for loop
    char dessending_letters;

    // taking input from user
    printf("Enter the value of length:- ");
    scanf("%d", &length);

    int no_of_spaces = length - 1;
    // created loop and logic for printing the pattern

    for (i = 1; i <= length; i++)
    {
        //  ---------Here each J variable is independent in all loops----------------

        // initelised the value = A using ASCII
        assending_letters = 65;

        // this loop pint spaces
        for (j = 1; j <= no_of_spaces; j++)
        {
            printf("  ");
        }
        no_of_spaces--;

        // this loop print letters in assending order
        for (j = 1; j <= i; j++)
        {
            printf("%c ", assending_letters);
            assending_letters++;
        }

        // initalizing this variable of next loop
        // here 2 is subtracted instade of 1 because in above loop
        // assending_letters value is increased by using assending_letters++ before exiting
        dessending_letters = assending_letters - 2;

        // this loop print letters in dessending order
        for (j = 1; j < i; j++)
        {
            printf("%c ", dessending_letters--);
        }

        printf("\n");
    }

    return 0;
}