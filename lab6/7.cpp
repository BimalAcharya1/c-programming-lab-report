//7. WAP to uses three integers, which are stored in an array of pointers

#include <stdio.h>

int main() {
    // Declaring three integer variables
    int a = 10, b = 20, c = 30;

    // Declaring an array of pointers to integers with a size of 3
    int *ptrArray[3];

    // Storing the addresses of a, b, and c in the pointer array
    ptrArray[0] = &a;
    ptrArray[1] = &b;
    ptrArray[2] = &c;

    // Printing the values of a, b, and c using the pointer array
    printf("Values stored in the array of pointers:\n");
    for (int i = 0; i < 3; i++) {
        printf("Value at ptrArray[%d]: %d\n", i, *ptrArray[i]);
    }

    return 0;
}

