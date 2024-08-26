// write a program to find greates of four
// number enter vy the user

#include <stdio.h>

int main()
{
    printf("this program help us to find greatest number from four given number\n");
    int number1, number2, number3, number4;

    // taking 4 times numbers input from user
    printf("Enter first number\n");
    scanf("%d", &number1);
    printf("Enter second number\n");
    scanf("%d", &number2);
    printf("Enter third number\n");
    scanf("%d", &number3);
    printf("Enter fourth number\n");
    scanf("%d", &number4);

    // checking which number is greatest
    if ((number1 > number2) && (number1 > number3) && (number1 > number4))
    {
        printf("The greatest number is %d\n", number1);
    }
    else if ((number2 > number1) && (number2 > number3) && (number2 > number4))
    {
        printf("The greatest number is %d\n", number2);
    }
    else if ((number3 > number1) && (number3 > number2) && (number3 > number4))
    {
        printf("The greatest number is %d\n", number3);
    }
    else if ((number4 > number1) && (number4 > number2) && (number4 > number3))
    {
        printf("The greatest number is %d\n", number4);
    }
    else
    {
        printf("Enter valid or non equal numbers\n");
    }

    return 0;
}