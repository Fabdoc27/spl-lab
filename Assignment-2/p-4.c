#include <stdio.h>

// Write a C program to input two integer numbers and swap their values without using a third variable.

int main()
{
    int a, b;

    printf("Please enter two values:\n");
    scanf("%d %d", &a, &b);
    printf("Before swapping the values are a = %d and b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping the values are a = %d and b = %d", a, b);
    return 0;
}
