#include <stdio.h>

// Write a C program to find the largest among three numbers.

int main() {
    int a, b, c;
    printf("Please enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("%d is the largest number", a);
        } else {
            printf("%d is the largest number", c);
        }
    } else {
        if (b > c) {
            printf("%d is the largest number", b);
        } else {
            printf("%d is the largest number", c);
        }
    }

    return 0;
}
