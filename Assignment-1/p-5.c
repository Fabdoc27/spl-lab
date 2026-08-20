#include <stdio.h>

// Three numbers are 25,40 and 55 . Write a C program to calculate and display their sum and average.

int main()
{
    int a = 25, b = 40, c = 55;
    float sum, average;

    sum = (float)(a + b + c);
    average = (float)sum / 3;

    printf("Sum is %.2f and average is %.2f", sum, average);
    return 0;
}
