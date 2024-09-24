/*1. WAP to find the sum of two integer using Calling a function through main() */
#include <stdio.h>

// Function to calculate the sum of two integers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    // Input two integers from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Call the sum function
    result = sum(num1, num2);

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}


