// Write a program to print the address of a variable. Use this address to get the
// value of the variable. and also print the value of that variable

#include <stdio.h>

int main()
{
    int i = 5;
    int *j = &i;
    printf("The address of i is %p \n", &i);
    printf("The value of j is %p\n", j);
    printf("The value at address wich is holded by j is %d\n", *j);
    printf("The value of i is %d\n", i);
    return 0;
}