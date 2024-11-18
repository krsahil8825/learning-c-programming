// write aprogramm to sum first ten natural number
// using do-while and for loop

#include <stdio.h>

int main()
{
    printf("This program is used to find sum of first 10 natural numbers\n");

    // ----> DO-WHILE LOOP <----

    // making two variable number1 = 0 and
    // number2 =0
    int number1 = 0, number2 = 0;

    // creating loop for add number
    // increasing number2 by +1 until it become 10
    do
    {
        number1 = number1 + number2;
        number2++;
    } while (number2 <= 10);

    // printing the sum of do-While loop
    printf("the sum of first 10 natural number is %d\n", number1);

    //
    // ----> FOR LOOP <----
    //

    // making variable number3 = 0
    int number3 = 0, number4 = 0;

    // creating loop for add number
    // making variable number4 = 0 and
    // increasing number4 by +1 until it become 10
    for (number4 = 0; number4 <= 10; number4++)
    {
        number3 = number3 + number4;
    }

    // printing the sum of for loop
    printf("the sum of first 10 natural number is %d\n", number3);

    return 0;
}