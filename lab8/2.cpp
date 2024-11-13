/*2. WAP to write I study into BernHardt college,Bafal to a file named college. txt into append mode.*/

#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *file;

    // Open the file in append mode
    // "a" mode opens the file for appending, if the file doesn't exist, it will be created
    file = fopen("college.txt", "a");

    // Check if the file was opened successfully
    if (file == NULL) {
        // If the file couldn't be opened, print an error message and exit
        printf("Error opening the file.\n");
        return 1;
    }

    // Write the desired string to the file
    fprintf(file, "I study into BernHardt college, Bafal\n");

    // Close the file after writing
    fclose(file);

    // Print a success message
    printf("Data successfully written to college.txt\n");

    return 0;
}
