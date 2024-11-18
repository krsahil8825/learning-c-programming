// Write a program to print multiplication table of
// a given number n

#include <stdio.h>

int main()
{
    printf("this program help us to write multiplication table of any number\n");

    // 'number1' variable is used to store input of user
    int number1;

    // taking input from variable
    printf("Enter a number\n");
    scanf("%d", &number1);

    // 'number2' variable use for getting 1 to 10 natural
    // number for printing table. number2 keep incresing 
    // until it become 10

    // creating loop for printing table
    for (int number2 = 1; number2 <= 10; number2++)
    {
        printf("%d * %d = %d\n", number1, number2, number1 * number2);
    }

    return 0;
}