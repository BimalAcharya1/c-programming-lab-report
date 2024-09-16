/* 4. WAP to add two matrix input given by user. */
#include <stdio.h>

int main(){
    int rows, colm;
    // Get the dimensions of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &colm);

    // Declare matrices
    int matrix1[rows][colm], matrix2[rows][colm], sum[rows][colm];

    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the two matrices
        for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
        sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
        }

    // Display the result
        printf("Sum of the two matrices:\n");
        for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
        }

        return 0;
        }
 
