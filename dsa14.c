//Check Identity Matrix
#include <stdio.h>

int main() {
    int n, flag = 1;

    printf("Enter size: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i == j && A[i][j] != 1) || (i != j && A[i][j] != 0)) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Identity Matrix");
    else
        printf("Not Identity Matrix");

    return 0;
}