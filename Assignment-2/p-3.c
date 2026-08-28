#include <stdio.h>

// Write a C program to read three subject marks from user and print the total and percentage.

int main()
{
    int mark_1, mark_2, mark_3, total, max_total = 300;
    float percentage;

    printf("Please enter marks of three subjects:\n");
    scanf("%d %d %d", &mark_1, &mark_2, &mark_3);

    total = mark_1 + mark_2 + mark_3;
    percentage = (float)total / max_total * 100;

    printf("Total is %d and percentage is %.2f%%", total, percentage);
    return 0;
}
