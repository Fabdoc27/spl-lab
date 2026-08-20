#include <stdio.h>
#include <math.h>

// The radius of a circle is given as 5. Write a C program to calculate and display its area and perimeter.

int main()
{
    int r = 5;
    float area, perimeter;

    area = 3.1416 * pow(r, 2);
    perimeter = 2 * 3.1416 * r;

    printf("Area is %.2f and perimeter is %.2f", area, perimeter);

    return 0;
}
