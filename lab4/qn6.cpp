/*6. WAP to multiply two matrix given by user, also take no of rows and columns from user for both 
matrix.*/
#include <stdio.h>

int main() {
    int rows1, colm1, rows2, colm2;

    // Input dimensions for the first matrix
    printf("Enter the number of rows and columns for the first matrix:\n");
    scanf("%d %d", &rows1, &colm1);

    // Input dimensions for the second matrix
    printf("Enter the number of rows and columns for the second matrix:\n");
    scanf("%d %d", &rows2, &colm2);

    // Check if multiplication is possible
    if (colm1 != rows2) {
        printf("Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    // Declare matrices
    int matrix1[rows1][colm1], matrix2[rows2][colm2], product[rows1][colm2];

    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < colm1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < colm2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize the product matrix to 0
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < colm2; j++) {
            product[i][j] = 0;
        }
    }

    // Compute the product of the two matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < colm2; j++) {
            for (int k = 0; k < colm1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the first matrix
    printf("\nFirst Matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < colm1; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // Display the second matrix
    printf("\nSecond Matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < colm2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Display the product matrix
    printf("\nProduct Matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < colm2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

