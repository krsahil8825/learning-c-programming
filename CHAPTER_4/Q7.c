// Write a program to calculate the sum of
// the sum of numbers occuring in the multiplication
// table of 8 (from 8 x 1 to 8 x 10)

#include <stdio.h>

int main()
{
    printf("This program is used to find sum of numbers occuring in the multiplication table of 8\n");
    
    // creating two variable
    // number1 =8
    // total = 0
    int number1 = 8, total = 0;

    // creating loop for calculating the sum of nummber
    // occuring in multiplication table of 8 (from 8 x 1 to 8 x 10)
    // created number2 variable and
    // increasing number2 by +1 until it become 10
    for (int number2 = 0; number2 <= 10; number2++)
    {
        printf("%d * %d = %d\n", number1, number2, number1 * number2);
        total = total + (number1 * number2);
    }

    // printing total (sum of the numbers occur in the multiplication
    // of 8 from 8 x 1 to 8 x 10)
    printf("the total is %d\n", total);

    return 0;
}