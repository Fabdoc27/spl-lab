#include <stdio.h>

/*
Write a C program to input the number of items to be purchased and the price of each item. Calculate and display the total price. If a 10% discount is applied to the total price, calculate and display the discount amount and the final price after the discount.
    Example:
    Number of items: 5
    Prices: 23, 45, 67, 12, 10
    Total price: 157
    Discount: 10%
    Final price: 141.30
*/

int main() {
    int i, n, price, total = 0;
    float discount_amount, final_price;

    printf("How many items you purchased? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter the price of your item %d: ", i);
        scanf("%d", &price);

        total += price;
    }

    discount_amount = (float)(total * 10) / 100;
    final_price = total - discount_amount;

    printf("Total amount %d\nDiscount amount %.2f\nFinal price %.2f", total, discount_amount, final_price);

    return 0;
}
