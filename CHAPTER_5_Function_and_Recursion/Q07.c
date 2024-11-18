// wrie a program uding function to print the
// following pattern (first n lines)
// *
// ***
// *****

#include <stdio.h>

// function prototype
void printing_paatern(int a);

// main function
int main()
{
    // user instruction
    printf("This program print pattern\n");

    // This variable store the number jnput from user
    int n_line;

    // taking input from user
    printf("How many line you want to print this pattern: ");
    scanf("%d", &n_line);

    // calling function that i created
    printing_paatern(n_line);

    return 0;
}

// function defination
void printing_paatern(int a)
{
    if (a == 1)
    {
        printf("*\n");
        return;
    }

    // this below line create recursion
    printing_paatern(a - 1);

    // created loop to print pattern
    for (int i = 0; i < (2 * a - 1); i++)
    {
        printf("*");
    }

    // This below statement prints new line
    printf("\n");
}