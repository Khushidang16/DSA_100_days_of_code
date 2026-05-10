// Matrix Diagonal Sum
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    for(int i = 0; i < n; i++)
        sum += A[i][i];

    printf("Diagonal Sum = %d", sum);

    return 0;
}