/*3. WAP to create a file and write some text to it one character at a time until user hits the enter 
key.*/

#include <stdio.h>

int main() {
    // Declare a file pointer to handle file operations
    FILE *file;
    
    // Open the file in write mode ("w"). 
    // If the file already exists, it will be overwritten.
    // If the file doesn't exist, it will be created.
    file = fopen("user_input.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        // If the file couldn't be opened, display an error message and return
        printf("Error opening the file.\n");
        return 1;
    }

    char ch; // Variable to hold each character input by the user

    // Inform the user to start entering characters
    printf("Enter characters to write to the file (hit Enter to stop):\n");

    // Read one character at a time
    while (1) {
        // Read a single character from the user
        ch = getchar();

        // Check if the user pressed the Enter key (newline character)
        if (ch == '\n') {
            break; // Stop the loop when Enter is pressed
        }

        // Write the character to the file
        fputc(ch, file);
    }

    // Close the file after writing
    fclose(file);

    // Inform the user that the input has been written successfully
    printf("Your input has been written to 'user_input.txt'.\n");

    return 0;
}

