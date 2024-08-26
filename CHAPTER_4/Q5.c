// write aprogramm to sum first ten natural number
// using while loop

#include <stdio.h>

int main()
{
    printf("This program is used to add first 10 natural numbers\n");
    
    // making two variable number1 = 0 and 
    // number2 =0
    // number1 used for storing total
    int number1 = 0, number2 = 0;

    // creating loop for add number
    // increasing number2 by +1 until it become 10
    while (number2 <= 10)
    {
        number1 = number1 + number2;
        number2++;
    }

    // printing the sum
    printf("the sum of first 10 natural number is %d\n", number1);
    return 0;
}