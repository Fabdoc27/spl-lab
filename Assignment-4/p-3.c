#include <stdio.h>

// Write a C program to input a number from the user and display its multiplication table from 1 to 10 using a for loop.

int main() {
    int i, a;
    printf("Please enter a value: ");
    scanf("%d", &a);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", a, i, a * i);
    }

    return 0;
}
