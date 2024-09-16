/*14. WAP to concatenate (combine/join) any two string together.*/
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100  // Define a maximum length for the strings

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    char result[MAX_LENGTH * 2];  // Result should be large enough to hold both strings

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    // Remove the newline character if present
    str1[strcspn(str1, "\n")] = '\0';

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove the newline character if present
    str2[strcspn(str2, "\n")] = '\0';

    // Copy the first string to result
    strcpy(result, str1);
    
    // Concatenate the second string to result
    strcat(result, str2);

    // Output the concatenated result
    printf("Concatenated string: %s\n", result);

    return 0;
}

