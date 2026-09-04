#include <stdio.h>

/*
Write a C program to input two numbers and an operator (+, -, *, /) and perform the corresponding calculation using a switch-case statement.
    Example: Enter two numbers: 20 5
    Operation: (1)Addition,(2)Subtraction,(3)Multiplication,(4)Division,(5)Remainder
    Enter operator: 1
    Result = 25
*/

int main() {
    int a, b, operator;

    printf("Please enter two number: ");
    scanf("%d %d", &a, &b);

    printf("Which operation you want?\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\nPlease enter a value (1-5) for your desired operation: ");
    scanf("%d", &operator);

    switch (operator) {
        case 1:
            printf("%d", a + b);
            break;

        case 2:
            printf("%d", a - b);
            break;

        case 3:
            printf("%d", a * b);
            break;

        case 4:
            if (b == 0) {
                printf("Can't be divided by 0 (Zero)\n");
            } else {
                printf("%.2f", (float)a / b);
            }
            break;

        case 5:
            printf("%d", a % b);
            break;

        default:
            printf("Invalid choice. Please pick from (1-5)\n");
            break;
    }
    return 0;
}
