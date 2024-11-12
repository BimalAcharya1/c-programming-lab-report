//9. WAP to demonstrate the Passing to Pointer function.

#include <stdio.h>

// Function that takes an integer pointer as a parameter
void increment(int *num) {
    // Incrementing the value at the address pointed to by num
    *num = *num + 1;
}

int main() {
    int value = 5;

    // Printing the original value
    printf("Original value: %d\n", value);

    // Passing the address of value to the increment function
    increment(&value);

    // Printing the modified value after calling the increment function
    printf("Value after increment: %d\n", value);

    return 0;
}

