/*
An two-dimensional matrix can be multiplied by another matrix to give a matrix whose elements are the sum of the products of the elements within a row from the first matrix
and the associated elements of a column of the second matrix. Both matrices should either be
square matrices, or the number of columns of the first matrix should equal the number of rows of
the second matrix. 
To calculate each element of the resultant matrix, multiply the first element of a given row from
the first matrix and the first element of a given column in the second matrix, add that to the product
of the second element of the same row and the second element of the same column, and keep doing
so until the last elements of the row and column have been multiplied and added to the sum.
Write a program to calculate the product of 2 matrices and store the result in a third matrix.
*/
#include <stdio.h>

int canMultiply(int colA, int rowB) {
    return colA == rowB;
}
void multiplyMatrices(int A[][100], int B[][100], int result[][100], int rowA, int colA, int rowB, int colB) {
    for (int i = 0; i < rowA; ++i) {
        for (int j = 0; j < colB; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < colA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void displayMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rowA, colA, rowB, colB;
    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d %d", &rowA, &colA);
    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d %d", &rowB, &colB);
    if (!canMultiply(colA, rowB)) {
        printf("Matrices cannot be multiplied.Either the matrices should be a square or  Column of the first matrix should equal the row of the second matrix.\n");
        return 1; 
    }
    int matrixA[100][100], matrixB[100][100], result[100][100];
    printf("Enter elements of the first matrix (%d x %d):\n", rowA, colA);
    for (int i = 0; i < rowA; ++i) {
        for (int j = 0; j < colA; ++j) {
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Enter elements of the second matrix (%d x %d):\n", rowB, colB);
    for (int i = 0; i < rowB; ++i) {
        for (int j = 0; j < colB; ++j) {
            scanf("%d", &matrixB[i][j]);
        }
    }
    multiplyMatrices(matrixA, matrixB, result, rowA, colA, rowB, colB);
    printf("Resultant matrix after multiplication:\n");
    displayMatrix(result, rowA, colB);
    return 0;
}