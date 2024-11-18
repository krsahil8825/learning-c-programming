// what will be the output of this program
//     int a = 10;
//     if(a=11)
//     printf("I am 11");
//     else
//     printf("I am not 11");

// Answer
// The output is ==> I am 11 because in if statement
// a is assigned as 11. here a is having = sign not ==.
// = sign is used for assigning value and == used for equality check

#include <stdio.h>

int main()
{
    printf("This program is used for verification of above question\n");

    // creating variable
    int a = 10;

    // in this if statement a is assigned 11 ie value of a is 1
    // here a is no any equality check
    if (a = 11)
    {
        printf("I am 11");
    }
    else
    {
        printf("I am not 11");
    }
    return 0;
}