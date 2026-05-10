// Check Symmetric Matrix
#include <stdio.h>

int main() {
    int n, flag = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(A[i][j] != A[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric");

    return 0;
}