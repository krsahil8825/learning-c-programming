/*
This is going to be fun!
we will write a program that generates a ransdom
number and asks the player to guess it. If the guess
is higher than actual number the program displays "lower
number please" similarly if the guess is to low the program
display "Higher number please"
when the guess the correct number the program displays the
number of guesses the player used to arrive at that number

use loop
use a random number generator and initilise rand
i.e. rand function and include stdlib.h and time.h library
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // introducing user to game
    printf("Welcome to Guess the number Game\n");
    printf("I hope you like it\n");

    // this variable contains the value of random number
    int random_number;

    // this variable contain the value of number input by user
    int input_number;

    // this variable store the value how many time user
    // guess to find actual number
    int guess_counter = 0;

    // this helps us to get random number between 1 to 100
    srand(time(0));
    random_number = rand() % 100 + 1;

    // taking input from user
    printf("Guess the number (number is between 1 to 100): ");
    scanf("%d", &input_number);

    // creating loop
    // the condition to run the loop is, if input_number is not equal to random_number
    while (input_number != random_number)
    {
        // this if statement work when the Input number is greater than random number
        if (input_number > random_number)
        {
            printf("Your guess is greater than actual number, Guess Smaller number\n");
        }

        // this if statement work when the Input number is smaller than random number
        else if (input_number < random_number)
        {
            printf("Your guess is smaller than actual number, Guess Greater number\n");
        }

        // this code increase guess_counter by +1
        guess_counter++;

        // taking input from user again
        printf("Guess the number again: ");
        scanf("%d", &input_number);
    }

    // if the user guess the correct number this if
    // statement runs
    if (input_number == random_number)
    {
        printf("The number is %d\n", random_number);
        printf("You guess the correct number after guessing %d times\n", guess_counter);
        printf("Thanks for playing the game\n");
    }

    // if user not coperate or if somthing wrong happen this code runs
    else
    {
        printf("Somthing error occur. Please, run the program again and follow the instructions\n");
        printf("Sorry for error\n");
    }

    return 0;
}