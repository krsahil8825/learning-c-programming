// write a program to check whether a
// number is divisible by 97 or not

#include <stdio.h>

int main()
{
    printf("This program help to find a number is divisible by 97 or not\n");

    // user instruction
    printf(" if the answer is equal to 0. It means the given number is divisible by 97\n");
    printf(" if the answer is not equal to 0. It means the given number is not divisible by 97\n");

    // creating a int number variable to get input from user
    int number;

    // taking input from user
    printf("Enter a number\n");
    scanf("%d", &number);

    // printing the remainder value
    printf(" the answer is %d\n", number % 97);
    return 0;
}