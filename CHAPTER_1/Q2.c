// write a program to calculate the area of circle
// then modefy it to calculate area of cylinder using user input

#include <stdio.h>

int main()
{
    printf("This Program help us to find the area of cirlce and cylinder\n");

    // creating two variable name radius and height
    int radius, height;
    float pi = 3.14;

    // taking input from user
    printf("Enter the radius in centimeter\n");
    scanf("%d", &radius);

    // calculating and printing area of circle
    float area_of_circle = pi * radius * radius;
    printf("The area of the circle is %f cm sq.\n", area_of_circle);

    // taking input from user
    printf("Enter the height of cylinder\n");
    scanf("%d", &height);

    // calculating and printing area of cylinder
    float area_of_cylinder = 2 * pi * radius * (radius + height);
    printf("the area of cylinder is %f cm sq.\n", area_of_cylinder);

    return 0;
}