// Program to print diagonall element of matrix.

#include <stdio.h>

int main() {
    int a[10][10], n, i, j;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }

    return 0;
}
