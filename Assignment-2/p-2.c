#include <stdio.h>

// The temperature in Celsius is provided by the user. Write a C program to convert and display it in Fahrenheit and Kelvin.

int main()
{
    float celsius, fahrenheit, kelvin;

    printf("Please enter a celsius value:\n");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;

    printf("Fahrenheit is %.2f and kelvin is %.2f", fahrenheit, kelvin);
    return 0;
}
