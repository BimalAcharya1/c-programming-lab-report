//10. WAP to add any two number using pointer variable.

#include <stdio.h>

int main() {
    // Declare two integer variables to hold the numbers
    int num1, num2;

    // Declare pointers for num1 and num2
    int *ptr1, *ptr2;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Initialize pointers to point to the addresses of num1 and num2
    ptr1 = &num1;
    ptr2 = &num2;

    // Calculate the sum using dereferenced pointers
    int sum = *ptr1 + *ptr2;

    // Print the result
    printf("The sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);

    return 0;
}

