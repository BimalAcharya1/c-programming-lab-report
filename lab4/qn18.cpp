/*18. WAP to read word string and check whether the entered string is palindrome or not.*/
#include <stdio.h>
#include<string.h>
#include <ctype.h> // for tolower() function

#define MAX_LENGTH 100

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int start = 0;
    int end = 0;

    // Find the length of the string
    while (str[end] != '\0') {
        end++;
    }
    end--; // Set end to the last character in the string

    // Check if characters from start and end match
    while (start < end) {
        // Skip non-alphanumeric characters
        if (!isalnum(str[start])) {
            start++;
        } else if (!isalnum(str[end])) {
            end--;
        } else if (tolower(str[start]) != tolower(str[end])) {
            return 0; // Not a palindrome
        } else {
            start++;
            end--;
        }
    }

    return 1; // Is a palindrome
}

int main() {
    char str[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

