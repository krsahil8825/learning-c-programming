// write a program using recursion to calculate
// nth element os Fibonacci series

#include <stdio.h>

// function prototype
int Fibonacci(int a);

// main function
int main()
{
    // created this variable to store input from user
    int nterm;

    // taking input from uset
    printf("Enter a number: ");
    scanf("%d", &nterm);

    // creating loop for printing Fibonacci series
    for (int i = 0; i < nterm; i++)
    {
        printf("%d ", Fibonacci(i));
    }

    return 0;
}

// function defination
int Fibonacci(int a)
{
    // created this variable to store result
    int result;

    // created if else if and else to calculate the number 
    if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
        result = Fibonacci(a - 1) + Fibonacci(a - 2);
    }
    return result;
}
