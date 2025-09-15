#include <stdio.h>

int main() {
    int n;
    printf("Enter order of matrix: ");
    scanf("%d", &n);

    int mat1[n][n], mat2[n][n], mat3[n][n];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat2[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mat3[i][j] = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                mat3[i][j] += mat1[i][k] * mat2[k][j];

    printf("Multiplication of the two matrices is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mat3[i][j]);
        printf("\n");
    }

    return 0;
