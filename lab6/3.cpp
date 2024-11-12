//3. WAP to illustrate use of pointer array.
#include <stdio.h>

int main() {
    // Declare an array of integers
    int nums[] = {10, 20, 30, 40, 50};

    // Declare an array of pointers to integers
    int *ptrArray[5];

    // Assign the addresses of the elements of 'nums' to the elements of 'ptrArray'
    for (int i = 0; i < 5; i++) {
        ptrArray[i] = &nums[i];
    }

    // Output the values of the array elements using the pointer array
    printf("Values in nums[] accessed using the pointer array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Value at nums[%d]: %d\n", i, *ptrArray[i]);
    }

    // Output the addresses stored in the pointer array
    printf("\nAddresses stored in the pointer array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Address of nums[%d]: %p\n", i, ptrArray[i]);
    }

    return 0;
}

