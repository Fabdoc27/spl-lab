#include <stdio.h>

/*
Using the C programming language, write a program to print the following pattern:

    *
   * *
  * * *

*/

int main() {
    int n, i, j, k;
    printf("Please enter a value: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (k = 1; k <= i; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
