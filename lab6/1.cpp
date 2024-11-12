//1. WAP for illustrating use of pointer.

#include <stdio.h>

int main() {
    // Declare an integer variable
    int num = 42;

    // Declare a pointer variable that will store the address of 'num'
    int *ptr;

    // Store the address of 'num' in the pointer 'ptr'
    ptr = &num;

    // Output the value of 'num'
    printf("Value of num: %d\n", num);

    // Output the address of 'num' (which is stored in 'ptr')
    printf("Address of num: %p\n", ptr);

    // Output the value stored at the address pointed to by 'ptr' (dereferencing the pointer)
    printf("Value pointed to by ptr: %d\n", *ptr);

    // Modify the value of 'num' through the pointer
    *ptr = 100;

    // Output the modified value of 'num'
    printf("Modified value of num: %d\n", num);

    return 0;
}

