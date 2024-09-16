/*15. WAP to convert lowercase to uppercase and uppercase to lower case using string function.*/
#include <stdio.h>
#include <ctype.h> //We'll use the standard C library functions tolower and toupper from the <ctype.h> header to achieve this.
#include <string.h>

void convertCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        // If the character is neither lowercase nor uppercase, it's left unchanged.
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    convertCase(str);
    
    printf("Converted string: %s\n", str);
    
    return 0;
}

