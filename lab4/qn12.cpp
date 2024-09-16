/*12. WAP that read strings with blank space and without blank space.*/
#include <stdio.h>

#define MAX_LEN 100
#include<string.h>
int main() {
    char strWithoutSpaces[MAX_LEN];
    char strWithSpaces[MAX_LEN];

    // Read string without blank spaces
    printf("Enter a string without spaces: ");
    scanf("%s", strWithoutSpaces);

    // Consume the leftover newline character from the input buffer
    while (getchar() != '\n');

    // Read string with blank spaces
    printf("Enter a string with spaces: ");
    fgets(strWithSpaces, MAX_LEN, stdin);

    // Remove the newline character from the end of the string (if present)
    size_t len = strlen(strWithSpaces);
    if (len > 0 && strWithSpaces[len - 1] == '\n') {
        strWithSpaces[len - 1] = '\0';
    }

    // Print the results
    printf("String without spaces: %s\n", strWithoutSpaces);
    printf("String with spaces: %s\n", strWithSpaces);

    return 0;
}


