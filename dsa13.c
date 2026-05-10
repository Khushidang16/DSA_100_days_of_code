//Boundary-to-Center Matrix Walk
#include <stdio.h>

int main() {
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c];

    printf("Enter matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    int top = 0, bottom = r-1, left = 0, right = c-1;

    printf("Spiral Order:\n");

    while(top <= bottom && left <= right) {

        for(int i = left; i <= right; i++)
            printf("%d ", A[top][i]);
        top++;

        for(int i = top; i <= bottom; i++)
            printf("%d ", A[i][right]);
        right--;

        if(top <= bottom) {
            for(int i = right; i >= left; i--)
                printf("%d ", A[bottom][i]);
            bottom--;
        }

        if(left <= right) {
            for(int i = bottom; i >= top; i--)
                printf("%d ", A[i][left]);
            left++;
        }
    }

    return 0;
}