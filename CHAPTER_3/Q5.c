// write a program to determine whether a
//  character entered by the user is lowercase
// or not

// HINT
// FOR THIS QUESTION YOU HAVE TO USE ASCII TABLE
// AMERICAN STANDERD FOR INFORMATION INTERCHANGE
// ASCII SET ASTANDERD NUMBER FOR EACH CHARACTER
// LETTER OR ANY SYMBOL

#include <stdio.h>

int main()
{
    printf("this program help us to check the case of english letters\n");

    // creating variable
    char case_check;

    // taking input from user
    printf("Enter a letter\n");
    scanf("%c", &case_check);

    // According to ASCII the number from 97-122
    // is assigned to lower case letter and 65-90
    // is assigned to upper case letter
    // and giving output according to checking condition
    if ((case_check >= 97) && (case_check <= 122))
    {
        printf("Lowercase Letter\n");
    }
    else if ((case_check >= 65) && (case_check <= 90))
    {
        printf("Uppercase Letter\n");
    }
    else
    {
        printf("Enter valid and single letter\n");
    }

    return 0;
}