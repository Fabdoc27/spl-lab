#include <stdio.h>

// Write a C program to determine whether a given number is divisible by 5 or not.

int main() {
    int a;
    printf("Please enter a number:\n");
    scanf("%d", &a);

    if (a % 5 == 0) {
        printf("%d is divisible by 5", a);
    } else {
        printf("%d is not divisible by 5", a);
    }

    return 0;
}
