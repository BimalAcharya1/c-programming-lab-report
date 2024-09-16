/*13. WAP to find the length of string.*/
#include <stdio.h>

// Function to find the length of a string
int stringLength(const char *str) {
    int length = 0;
    
    // Iterate through the string until the null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char str[100];
    
    // Input a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    size_t len = stringLength(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Find and print the length of the string
    int length = stringLength(str);
    printf("Length of the string is: %d\n", length);
    
    return 0;
}

