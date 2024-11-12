//2. WAP for illustrating use of double pointer.
#include <stdio.h>

int main() {
    // Declare an integer variable
    int num = 42;

    // Declare a pointer to an integer (single pointer)
    int *ptr;

    // Declare a pointer to a pointer (double pointer)
    int **double_ptr;

    // Store the address of 'num' in the pointer 'ptr'
    ptr = &num;

    // Store the address of 'ptr' in the double pointer 'double_ptr'
    double_ptr = &ptr;

    // Output the value of 'num'
    printf("Value of num: %d\n", num);

    // Output the value stored in 'ptr' (i.e., address of 'num')
    printf("Value of ptr (Address of num): %p\n", ptr);

    // Output the value stored in 'double_ptr' (i.e., address of 'ptr')
    printf("Value of double_ptr (Address of ptr): %p\n", double_ptr);

    // Dereference the double pointer to get the value of 'ptr'
    printf("Value pointed to by double_ptr (Value of ptr): %p\n", *double_ptr);

    // Double dereference the double pointer to get the value of 'num'
    printf("Value pointed to by *double_ptr (Value of num): %d\n", **double_ptr);

    return 0;
}

