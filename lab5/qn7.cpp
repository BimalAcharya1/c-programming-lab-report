/*7. WAP to compute the factorial of a number using (Recursion Function).*/
#include <stdio.h>

// Function declaration:
int factorial(int n);

// Main function:
int main() {
    int num, result;

    // Prompt the user to enter a number
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function with the number as an argument
        result = factorial(num);

        // Print the calculated factorial
        printf("The factorial of %d is %d\n", num, result);
    }

    return 0;
}

// Function definition:
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: factorial(n) = n * factorial(n-1)
        return n * factorial(n - 1);
    }
}
