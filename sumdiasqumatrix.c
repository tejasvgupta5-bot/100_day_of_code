#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += matrix[i][i];
    }

    printf("\nSum of main diagonal elements: %d\n", trace);

    return 0;
}