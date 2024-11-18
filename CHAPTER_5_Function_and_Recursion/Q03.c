// write a function to calcutate force of attraction
// on a body of mass m exertd by earth (g = 9.8 m/s sq.)

#include <stdio.h>

// function prototype
float force_of_attraction(float mass);

// main function
int main()
{

    // user instruction
    printf("This Program help us to calcutate force of attaction on a body exerted by earth\n");

    // created this variable to store user mass as input
    float user_mass;

    // taking input from user
    printf("Enter your mass in kg: ");
    scanf("%f", &user_mass);

    // calling and printing the function that i have created
    printf("The force of attaction exertd by earth on this body is %f Newton\n", force_of_attraction(user_mass));
    return 0;
}

// function defination
float force_of_attraction(float mass)
{
    // created force variable to calculate force of attraction
    float force = (float)mass * 9.8;

    // returning force
    return force;
}