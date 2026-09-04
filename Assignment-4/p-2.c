#include <stdio.h>

// Write a C program to input a character and determine whether it is a vowel, consonant, or another character using a switch-case statement.

int main() {
    char word;

    printf("Please enter a charecter: ");
    scanf("%c", &word);

    switch (word) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is vowel", word);
            break;

        default:
            if ((word >= 'a' && word <= 'z') || (word >= 'A' && word <= 'Z')) {
                printf("%c is consonant", word);
            } else {
                printf("%c is another charecter", word);
            }
            break;
    }
    return 0;
}
