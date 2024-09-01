// write a function to convert celcius temperature into farenhight

#include <stdio.h>

// function prototype
float temperature_converter(int celcius);

// main function
int main()
{
    // user instruction
    printf("This program helps to convert celcius temperature in fahrenheit\n");

    // created temperature variable to store temperature
    // value in celcius
    int temperature;

    // taking input from user
    printf("Enter The value of Temperature is in celcius is: ");
    scanf("%d", &temperature);

    // calling function
    printf("The temperature in fahrenhight is %f\n", temperature_converter(temperature));
    
    return 0;
}

// function defination
float temperature_converter(int celcius)
{
    // created fahrenhight variable to change 
    //the temperature in celcius to fahrenheit
    float fahrenheit = (float)(celcius * (9.0 / 5.0)) + 32.0; //typecasted into flaot

    // returning fahrenheit
    return fahrenheit;
}
