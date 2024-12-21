// write a program to print the following pattern with numbers which is given below
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

#include <stdio.h>

int main()
{
    // declering variables
    int length, length_half, minimum_value, output_value, x_axis, y_axis, i, j;

    // taking input from user
    printf("Enter the length (enter odd number, if you enter even it is increased by 1):- ");
    scanf("%d", &length);

    // checking if number is odd it incressed by 1
    if (length % 2 == 0)
    {
        length++;
        printf("length is increased by 1 because you enterd even number now length is = %d\n", length);
    }

    // initilizing this variable
    length_half = (length + 1) / 2;

    // created loop for print the patern
    for (i = 1; i <= length; i++)
    {

        // this loop help me to build the logic of the loop
        for (j = 1; j <= length; j++)
        {
            x_axis = i;
            if (i > length_half)
            {
                x_axis = length + 1 - i;
            }

            y_axis = j;
            if (j > length_half)
            {
                y_axis = length + 1 - j;
            }

            if (x_axis <= y_axis)
            {
                minimum_value = x_axis;
                output_value = length_half + 1 - minimum_value;
            }
            else
            {
                minimum_value = y_axis;
                output_value = length_half + 1 - minimum_value;
            }

            printf("%d ", output_value);
        }

        printf("\n");
    }

    return 0;
}