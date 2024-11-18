// write a program to print the following pattern like below

//     *     
//     *     
// * * * * * 
//     *     
//     *     

// solution
#include <stdio.h>

// main function
int main()
{
    // initilizing variable
    int square_length;

    // user instruction
    printf("This program print plush symbol usin star character \n");
    printf("For Accurate output enter odd number only except 1\n");

    // taking input from user
    printf("Enter the size in numbers: ");
    scanf("%d", &square_length);

    // created "a" as a variable that help in
    //finding where to print star
    int a = (square_length+1) / 2;

    // created loop for printing pattern
    for (int i = 1; i <= square_length; i++)
    {

        for (int j = 1; j <= square_length; j++)
        {
            if (i == a || j == a)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}