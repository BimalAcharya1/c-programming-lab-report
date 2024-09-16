/*17. WAP to count the number of vowels & constants in a given test.*/
#include <stdio.h>
#include <ctype.h> // for tolower() function

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    
    // Get the input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read the entire line
    
    // Iterate through each character in the string
    while (str[i] != '\0') {
        char ch = tolower(str[i]); // Convert character to lowercase
        
        // Check if the character is an alphabet
        if (isalpha(ch)) {
            // Check if it is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    
    // Display the result
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    
    return 0;
}

