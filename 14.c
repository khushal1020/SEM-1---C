#include <stdio.h>

int main() {
    int m, n;
    printf("Enter no of rows, columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (m != n) {
        printf("Matrix must be square matrix\n");
        return 0;
    }

    int isLower = 1;  // assume it is lower triangular
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] != 0) {
                isLower = 0;
                break;
            }
        }
    }

    if (isLower)
        printf("Lower triangular matrix\n");
    else
        printf("Not a lower triangular matrix\n");

    return 0;
}

