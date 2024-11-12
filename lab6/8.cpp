//8. WAP to use an array of pointers to character to store a list of strings

#include <stdio.h>

int main() {
    // Declaring an array of pointers to characters to store multiple strings
    const char *fruits[] = {"Apple", "Banana", "Cherry", "Mango", "Dragonfruit"};

    // Calculating the number of elements in the array
    int numFruits = sizeof(fruits) / sizeof(fruits[0]);

    // Printing each string using the array of pointers
    printf("List of fruits:\n");
    for (int i = 0; i < numFruits; i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;
}

