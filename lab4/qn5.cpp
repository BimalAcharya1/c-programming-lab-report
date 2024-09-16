/* 5. WAP to find the transpose of matrix given by user. */
#include <stdio.h>

int main() {
    int rows, colm;

    // Get the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &colm);

    // Declare matrices
    int matrix[rows][colm], transpose[colm][rows];

    // Input elements for the matrix
    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute the transpose of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the transposed matrix
    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < colm; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

