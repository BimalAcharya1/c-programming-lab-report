/*11. WAP to demonstrate the string Initialization.*/
#include <stdio.h>

int main() {
    // Method 1: Initializing a string using a string literal
    char str1[] = "Hello, World!";
    
    // Method 2: Initializing a string with individual characters
    char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    
    // Method 3: Initializing a string with a specific size
    char str3[20] = "Hi i am Bimal!";
    
    // Method 4: Directly assigning to a string (must be used with caution)
    char str4[20];
    snprintf(str4, sizeof(str4), "String example");

    // Printing the strings
    printf("Method 1: %s\n", str1);
    printf("Method 2: %s\n", str2);
    printf("Method 3: %s\n", str3);
    printf("Method 4: %s\n", str4);

    return 0;
}

