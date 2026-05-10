//Compute Power Using Recursion
#include <stdio.h>

int power(int base, int exp) {
    if(exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}

int main() {
    int base, exp;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    int result = power(base, exp);

    printf("Result = %d\n", result);

    return 0;
}