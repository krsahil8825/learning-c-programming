// Write a program to print multiplication table of
// 10 in reverse order

#include <stdio.h>

int main()
{
    printf("this program use to write table of ten in reverse order\n");

    // creating number1 variable that stores the value of 10
    int number1 = 10;

    // 'number2' variable use for getting 1 to 10 natural
    // number for printing table

    // creating loop for printing table

    // taking number2 = 10 and it keep decrease -1 until
    // it become 1 it help to print reverse table of 10
    for (int number2 = 10; number2 >= 1; number2--)
    {
        printf("%d * %d = %d\n", number1, number2, number1 * number2);
    }

    return 0;
}