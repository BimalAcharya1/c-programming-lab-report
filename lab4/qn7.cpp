/*7. WAP that accepts the price and stock of 5 different bulb, calculate the total price. */
#include <stdio.h>

int main() {
    int num_bulbs = 5;
    float price[num_bulbs], stock[num_bulbs];
    float total_price = 0.0;

    // Input price and stock for each bulb
    printf("Enter the price and stock for %d different bulbs:\n", num_bulbs);
    for (int i = 0; i < num_bulbs; i++) {
        printf("Bulb %d:\n", i + 1);
        printf("Price: ");
        scanf("%f", &price[i]);
        printf("Stock: ");
        scanf("%f", &stock[i]);
    }

    // Calculate the total price
    for (int i = 0; i < num_bulbs; i++) {
        total_price += price[i] * stock[i];
    }

    // Display the total price
    printf("\nTotal price for all bulbs: %.2f\n", total_price);

    return 0;
}

