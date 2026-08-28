#include <stdio.h>

// Write a C program to determine whether a given year is a leap year or not.

int main() {
    int year, is_leap_year;
    printf("Please enter a year:\n");
    scanf("%d", &year);

    is_leap_year = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ? 1 : 0;

    if (is_leap_year) {
        printf("%d is leap year\n", year);
    } else {
        printf("%d is not leap year\n", year);
    }

    return 0;
}
