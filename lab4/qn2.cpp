/* 2. WAP to demonstrate the program of Accessing elements of an Array */
#include <stdio.h>

int main() {
    // Define an array of integers
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]); // Calculate the size of the array
    
    // Accessing elements of the array directly
    printf("Accessing elements of the array:\n");
    
    printf("Element at index 0: %d\n", array[0]);
    printf("Element at index 1: %d\n", array[1]);
    printf("Element at index 2: %d\n", array[2]);
    printf("Element at index 3: %d\n", array[3]);
    printf("Element at index 4: %d\n", array[4]);
    
    // Accessing elements using a loop
    printf("\nAccessing elements using a loop:\n");
    for (int i = 0; i < size; i++) {
        printf("Element at index %d: %d\n", i, array[i]);
    }
    
    // Accessing elements from the end of the array
    printf("\nAccessing elements from the end of the array:\n");
    if (size > 0) {
        printf("Last element (using size-1 index): %d\n", array[size-1]);
    }
    if (size > 1) {
        printf("Second last element (using size-2 index): %d\n", array[size-2]);
    }
    
    return 0;
}


