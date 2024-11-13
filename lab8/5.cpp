/*5. WAP to open a file and copy all its content to another file. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;   // Pointers to handle source and destination files
    char ch;                        // Character variable to hold each character while copying

    char sourceFileName[] = "source.txt"; // Name of the source file
    char destFileName[] = "destination.txt"; // Name of the destination file

    // Open the source file in read mode ("r")
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        // If the source file cannot be opened, print an error and exit
        printf("Error opening source file: %s\n", sourceFileName);
        return 1;
    }

    // Open the destination file in write mode ("w")
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        // If the destination file cannot be opened, print an error and exit
        printf("Error opening destination file: %s\n", destFileName);
        fclose(sourceFile); // Close source file before exiting
        return 1;
    }

    // Copy contents from the source file to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {  // Read one character at a time from the source
        fputc(ch, destFile);  // Write the character to the destination file
    }

    // Close both the files after copying
    fclose(sourceFile);
    fclose(destFile);

    printf("File content copied successfully from %s to %s\n", sourceFileName, destFileName);

    return 0;
}

