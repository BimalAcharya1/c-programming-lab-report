//6. WAP to demonstrate the NULL pointer


#include <stdio.h>

int main() {
    // Declaring an integer pointer and initializing it with NULL
    int *ptr = NULL;

    // Checking if the pointer is NULL
    if (ptr == NULL) {
        printf("The pointer is NULL and does not point to any memory location.\n");
    } else {
        printf("The pointer is not NULL and points to an address: %p\n", ptr);
    }

    // Attempting to access the value at NULL pointer (commented out because it would cause an error)
    // printf("Value at ptr: %d\n", *ptr);  // Dereferencing a NULL pointer causes a segmentation fault.

    // Assigning a valid address to the pointer
    int value = 10;
    ptr = &value;

    // Now, ptr is no longer NULL; it points to the address of 'value'
    printf("After assigning, the pointer points to an address: %p\n", ptr);
    printf("Value at ptr: %d\n", *ptr);

    return 0;
}

