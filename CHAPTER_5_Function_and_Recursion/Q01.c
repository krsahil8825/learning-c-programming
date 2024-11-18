// write a program to find the average of three numbers

#include <stdio.h>

// finction Prototype
float average_number_calclator(int a, int b, int c);

// main function
int main()
{
    // user instruction
    printf("This Program Helps you to find the average of three numbers\n");

    // creating 3 a, b, c int variable to store number that input from user
    int a, b, c;

    // taking input from user
    printf("Enter The value of a: ");
    scanf("%d", &a);

    // taking input from user
    printf("Enter The value of b: ");
    scanf("%d", &b);

    // taking input from user
    printf("Enter The value of c: ");
    scanf("%d", &c);

    // calling and printing that funcition that i created
    printf("The average of these three numbers is %f\n", average_number_calclator(a, b, c));
    return 0;
}

// defining function that i created
float average_number_calclator(int x, int y, int z)
{
    // created average variavle to calcualte
    // the average of three number
    float average = (float)(x + y + z) / 2; // type casted as a float

    // returning average
    return average;
}