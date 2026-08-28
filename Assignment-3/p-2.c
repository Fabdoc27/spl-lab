#include <stdio.h>

// Write a C program to toggle a given alphabet.

int main() {
    char word;
    printf("Please enter an alphabet:\n");
    scanf("%c", &word);

    if (word >= 'a' && word <= 'z') {
        printf("After toggle - %c", word - 32);
    } else {
        printf("After toggle: %c", word + 32);
    }

    // alternet approch using XOR (^)
    // printf("After toggle: %c", word ^ 32);

    return 0;
}
