/*1. WAP to write I study BCA to a file named bca .txt into Write mode*/

#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *file;

    // Open the file in write mode ("w")
    file = fopen("bca.txt", "w");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit with an error code
    }

    // Write the string to the file
    fprintf(file, "I study BCA");

    // Close the file
    fclose(file);

    // Indicate success
    printf("Successfully wrote to the file.\n");
    return 0; // Exit successfully
}

