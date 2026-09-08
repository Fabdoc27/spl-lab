#include <stdio.h>

// Write a C program to print the following series: 50, 45, 40, 35, 30, ............, 5

int main() {
    int i;

    for (i = 50; i >= 5; i -= 5) {
        (i == 50) ? printf("%d", i) : printf(", %d", i);
    }

    return 0;
}
