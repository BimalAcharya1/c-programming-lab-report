//4.WAP to illustrate use of pointer arithmetic


#include <stdio.h>

int main() {
    // Declare an array of integers
    int arr[] = {10, 20, 30, 40, 50};
    
    // Get the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Declare a pointer and point it to the start of the array
    int *ptr = arr;

    printf("Array elements using pointer arithmetic:\n");

    // Loop through the array using pointer arithmetic
    for (int i = 0; i < n; i++) {
        // Dereference the pointer to access the value
        printf("Element %d: %d\n", i, *(ptr + i));
        
        // (ptr + i) moves the pointer i positions ahead of its current location
    }

    // Another way of traversing using the pointer itself (without array indexing)
    printf("\nArray elements by directly incrementing the pointer:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, *ptr);
        
        // Increment the pointer to point to the next element in the array
        ptr++;
    }

    return 0;
}

