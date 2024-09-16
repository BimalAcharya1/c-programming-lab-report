/*16. WAP to read name of n students and sort them in alphabet order.*/
#include <stdio.h>
#include <stdlib.h> 
//stdlib in C, declares various utility functions for type conversions, memory allocation, algorithms, and other similar use cases.  
#include <string.h>

// Function to swap two strings
void swap(char *a, char *b) {
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

// Function to sort the names using Bubble Sort
void bubbleSort(char names[][100], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(names[j], names[j+1]) > 0) {
                swap(names[j], names[j+1]);
            }
        }
    }
}

int main() {
    int n;

    // Read the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    // Declare an array to hold the names
    char names[n][100];

    // Clear the newline character left by scanf
    getchar();

    // Read names of students
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        
        // Remove newline character if present
        size_t len = strlen(names[i]);
        if (len > 0 && names[i][len-1] == '\n') {
            names[i][len-1] = '\0';
        }
    }

    // Sort the names
    bubbleSort(names, n);

    // Print the sorted names
    printf("\nSorted list of student names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

