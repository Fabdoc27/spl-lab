#include <stdio.h>
#include <math.h>

// Write a C program to input the radius of a circle by user. Now calculate and display the area and circumference of the circle.

int main()
{
    float radius, area, circumference;

    printf("Please enter a radius value:\n");
    scanf("%f", &radius);

    area = 3.1416 * pow(radius, 2);
    circumference = 2 * 3.1416 * radius;

    printf("Area is %.2f and circumference is %.2f", area, circumference);
    return 0;
}
