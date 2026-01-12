#include <stdio.h>

int main() {

    int n, i, j;
    int matrix[10][10], transpose[10][10];

    scanf("%d", &n);

    // Read matrix elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

     
	return 0;
}
