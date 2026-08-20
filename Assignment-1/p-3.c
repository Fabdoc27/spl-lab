#include <stdio.h>

// The principal amount is 50000, the rate of interest is 8%, and the time is 2 years. Write a C program to calculate and display the simple interest.

int main()
{
    int amount = 50000, rate = 8, time = 2;
    float interest;

    interest = (float)(amount * rate * time) / 100;

    printf("Simple interest is %.2f", interest);

    return 0;
}
