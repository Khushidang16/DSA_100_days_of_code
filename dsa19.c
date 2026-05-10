//Pair Sum Closest to Zero
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minSum = arr[0] + arr[1];
    int num1 = arr[0], num2 = arr[1];

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            int sum = arr[i] + arr[j];

            if(abs(sum) < abs(minSum)) {
                minSum = sum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    printf("Pair closest to zero: %d and %d\n", num1, num2);
    printf("Sum = %d", minSum);

    return 0;
}