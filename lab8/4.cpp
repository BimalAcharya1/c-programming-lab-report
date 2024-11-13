/*4. WAP which ask name & age of person & store (write) it in a file"record.txt".*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];  // Array to store the person's name
    int age;         // Variable to store the person's age
    FILE *file;      // Pointer to a file

    // Ask for user's name and age
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Use fgets to read a string with spaces
    printf("Enter your age: ");
    scanf("%d", &age);  // Read the age as an integer

    // Open the file "record.txt" in write mode
    file = fopen("record.txt", "w");
    if (file == NULL) {
        // If the file cannot be opened, display an error and exit
        printf("Error opening file!\n");
        return 1;
    }

    // Write the name and age to the file
    fprintf(file, "Name: %s", name);  // Write the name to the file
    fprintf(file, "Age: %d\n", age);  // Write the age to the file

    // Close the file after writing
    fclose(file);

    printf("Information has been written to record.txt successfully.\n");

    return 0;
}

