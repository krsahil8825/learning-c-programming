// repete question 10 using other to loops statement
// write a program to checkwhether a given
// number is prime or not using loop

#include <stdio.h>

int main()
{
    printf("This program is used to find the given number is prime or not\n");

    //
    // ----> while loop <----
    //

    // creating two variable number and prime
    // number stores input from user
    // prime indicates a number is prime or not.
    // if prime is = 1 it means, the number is prime
    // if prime is = 0 it means, the number is not prime
    int number, prime = 1;

    // created i variable to use in loop only
    int i = 2;

    // taking input from user
    printf("Enter a number\n");
    scanf("%d", &number);

    // this if condition shows that if a number is
    // 1,2 or 3 return prime = 1
    if (number == 1 || number == 2 || number == 3)
    {
        prime = 1;
    }

    // in else loop statement start for checking greater number than 3
    else
    {

        // creating i as variable whose initial value is 1
        // but it increases + 1 until it found a number is prime or
        // it become predecessor of given number by user
        while (i < number)
        {

            // in this if statement we checking the remainder
            // if remainder is = 0 it return prime = 0 and break the loop
            if (number % i == 0)
            {
                prime = 0;
                break;
            }

            // if remainder is not = to 0
            // then this else statement return prime = 1
            else
            {
                prime = 1;
            }
            i++;
        }
    }

    // this if statement say if the value of prime = 1
    // then the given number is prime
    if (prime == 1)
    {
        printf(" The given number is prime\n");
    }

    // this else statment say if prime is not = to 1 then
    // the given number is not prime
    else
    {
        printf(" The given number is not prime\n");
    }

    return 0;
}