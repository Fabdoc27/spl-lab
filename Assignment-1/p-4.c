#include <stdio.h>

// A distance of 5 kilometers is given. Write a C program to convert and display the distance in meters and centimeters.

int main()
{
    int distance = 5;
    float distance_in_meter, distance_in_cm;

    distance_in_meter = (float)distance * 1000;
    distance_in_cm = (float)distance * 100000;

    printf("Distance in meters of given value is %.2f and in centimeters is %.2f", distance_in_meter, distance_in_cm);

    return 0;
}
