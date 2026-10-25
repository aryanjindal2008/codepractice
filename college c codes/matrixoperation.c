#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Matrix 1 (rows cols): "); scanf("%d %d", &r1, &c1);
    printf("Matrix 2 (rows cols): "); scanf("%d %d", &r2, &c2);

    int a[r1][c1], b[r2][c2];

    printf("Enter Matrix 1:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++) scanf("%d", &a[i][j]);

    printf("Enter Matrix 2:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++) scanf("%d", &b[i][j]);

    // Addition & Subtraction
    if (r1 == r2 && c1 == c2) {
        printf("\nAddition:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) printf("%d ", a[i][j] + b[i][j]);
            printf("\n");
        }
        printf("\nSubtraction:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) printf("%d ", a[i][j] - b[i][j]);
            printf("\n");
        }
    } else {
        printf("\nAddition/Subtraction not possible (sizes must match).\n");
    }

    // Multiplication
    if (c1 == r2) {
        printf("\nMultiplication:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                int sum = 0;
                for (int k = 0; k < c1; k++) sum += a[i][k] * b[k][j];
                printf("%d ", sum);
            }
            printf("\n");
        }
    } else {
        printf("\nMultiplication not possible (Cols of M1 must equal Rows of M2).\n");
    }

    return 0;
}