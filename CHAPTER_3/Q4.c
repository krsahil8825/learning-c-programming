// write a program to find whether a year entered
// by user is a leap year or not. take year as an
// input from user

#include <stdio.h>

int main()
{

    printf("this program help us to find the given year is leap year or not\n");

    // creating variable
    int year;

    // taking inpt from user
    printf("Enter the year\n");
    scanf("%d", &year);

    // checking leap year conditions
    // condition source is microsoft

    // 1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
    // 2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
    // 3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
    // 4. The year is a leap year (it has 366 days).
    // 5. The year is not a leap year (it has 365 days).

    if ((year % 4) == 0)
    {
        if ((year % 100) == 0)
        {
            if ((year % 400) == 0)
            {
                printf("The year is a leap year");
            }
            else
            {
                printf("The year is not leap year");
            }
        }
        else
        {
            printf("The year is a leap year");
        }
    }
    else
    {
        printf("The year is not a leap year");
    }

    return 0;
}