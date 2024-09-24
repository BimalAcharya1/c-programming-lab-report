/*8. WAP to find the minimum value in an array passing array to function.*/
#include <stdio.h>

// Function declaration:
int find_minimum(int arr[], int size);

// Main function:
int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minimum;

    // Call the find_minimum function with the array and its size as arguments
    minimum = find_minimum(arr, size);

    // Print the minimum value
    printf("The minimum value in the array is: %d\n", minimum);

    return 0;
}

// Function definition:
int find_minimum(int arr[], int size) {
    int min = arr[0]; // Assume the first element is the minimum

    // Iterate through the array to find the minimum
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Return the minimum value
    return min;
}
