#include <stdio.h>

// Two characters are given by the user. Write a C program to show the characters with their corresponding ASCII value.

int main()
{
    char word_1, word_2;

    printf("Please enter two charecters:\n");
    scanf("%c %c", &word_1, &word_2);

    printf("ASCII values of your charecters are first-charecter: %d and second-charecter: %d", word_1, word_2);
    return 0;
}
