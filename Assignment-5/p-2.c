#include <stdio.h>

// Write a C program to print all the even numbers from 1 to 100. Calculate and display their sum and average.

int main() {
    int i, count = 0, sum = 0;

    printf("Even numbers are: ");
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            (count == 0) ? printf("%d", i) : printf(", %d", i);
            count++;
            sum += i;
        }
    }

    printf("\nSum of all even numbers is %d and average is %.2f", sum, (float)sum / count);
    return 0;
}
