#include <stdio.h>

/*
Write a C program to display the discount amount based on the purchase amount:

    Amount ≥ 10,000 → 25% discount
    Amount ≥ 7,000 → 20% discount
    Amount ≥ 5,000 → 15% discount
    Amount ≥ 3,000 → 10% discount
    Amount ≥ 1,000 → 5% discount
    Otherwise → No discount.
*/

int main() {
    int amount;
    printf("Please enter an amount:\n");
    scanf("%d", &amount);

    if (amount >= 10000) {
        printf("You will get 25%% discount");
    } else if (amount >= 7000) {
        printf("You will get 20%% discount");
    } else if (amount >= 5000) {
        printf("You will get 15%% discount");
    } else if (amount >= 3000) {
        printf("You will get 10%% discount");
    } else if (amount >= 1000) {
        printf("You will get 5%% discount");
    } else {
        printf("You will get no discount");
    }

    return 0;
}
