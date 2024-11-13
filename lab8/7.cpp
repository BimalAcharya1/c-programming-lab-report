/*7. Create a file name data.txt and write series of N integer number in that file. WAP to read this number and 
then write all odd number to a file odd.txt and all Even to a file even.txt */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *dataFile, *oddFile, *evenFile;  // File pointers
    int N, num;

    // Open the data.txt file for writing
    dataFile = fopen("data.txt", "w");
    if (dataFile == NULL) {
        printf("Error opening data.txt file for writing!\n");
        exit(1);  // Exit if file can't be opened
    }

    // Input the number of integers to write to the file
    printf("Enter the number of integers (N): ");
    scanf("%d", &N);

    // Prompt user to enter N integers and write to data.txt
    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        fprintf(dataFile, "%d\n", num);  // Write each number to data.txt
    }

    // Close the data.txt file after writing
    fclose(dataFile);

    // Open data.txt for reading
    dataFile = fopen("data.txt", "r");
    if (dataFile == NULL) {
        printf("Error opening data.txt file for reading!\n");
        exit(1);  // Exit if file can't be opened
    }

    // Open odd.txt for writing odd numbers
    oddFile = fopen("odd.txt", "w");
    if (oddFile == NULL) {
        printf("Error opening odd.txt file for writing!\n");
        fclose(dataFile);  // Close dataFile before exiting
        exit(1);
    }

    // Open even.txt for writing even numbers
    evenFile = fopen("even.txt", "w");
    if (evenFile == NULL) {
        printf("Error opening even.txt file for writing!\n");
        fclose(dataFile);
        fclose(oddFile);  // Close oddFile before exiting
        exit(1);
    }

    // Read numbers from data.txt and write them to odd.txt or even.txt
    while (fscanf(dataFile, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);  // Write even number to even.txt
        } else {
            fprintf(oddFile, "%d\n", num);   // Write odd number to odd.txt
        }
    }

    // Close all files
    fclose(dataFile);
    fclose(oddFile);
    fclose(evenFile);

    printf("Odd numbers are written to 'odd.txt' and even numbers to 'even.txt'.\n");

    return 0;
}


