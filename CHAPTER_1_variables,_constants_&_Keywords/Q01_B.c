// write c program to calculate area of rectangle
// by getting input from user

#include <stdio.h>

int main()
{
    printf("This program help us to find area of rectangle\n");

    // creating 2 variable length and breadth
    int length, breadth;

    // taking input from user
    printf("Enter the value of length in centimeter\n");
    scanf("%d", &length);

    // taking input from user
    printf("Enter the value of beadth in centimeter\n");
    scanf("%d", &breadth);

    // calculating and printing area of rectangle
    printf("The area of rectangle is %d cm sq.", length * breadth);

    return 0;
}