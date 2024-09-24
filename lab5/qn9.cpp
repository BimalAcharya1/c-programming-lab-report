/*9. WAP to call the function swap () by passing actual values.*/
#include <stdio.h>

// Function declaration:
void swap(int x, int y);

// Main function:
int main() {
    int a = 10, b = 20;

    // Call the swap function with actual values
    swap(a, b);

    // Print the values after the function call
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

// Function definition:
void swap(int x, int y) {
    int temp;

    // Swap the values of x and y
    temp = x;
    x = y;
    y = temp;

    // Print the values within the function (optional)
    printf("Inside the function: x = %d, y = %d\n", x, y);
}
