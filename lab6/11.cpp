//11. WAP that show The function, which can accept a pointer, can also accept an array

#include <stdio.h>

// Function that accepts an integer pointer (can also accept an integer array)
void displayElements(int *arr, int size) {
    printf("Array elements:\n");
    // Loop through the array using pointer arithmetic
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  // Accessing each element using pointer notation
    }
    printf("\n");
}

int main() {
    // Declare an array of integers
    int numbers[] = {1, 2, 3, 4, 5};

    // Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Pass the array to the function (it is treated as a pointer to the first element)
    displayElements(numbers, size);

    return 0;
}

