//EXAMPLE 6:
//Write a C program to calculate the factorial of a given non-negative integer.

#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
        factorial *= i;

    printf("Factorial of %d = %llu\n", n, factorial);
    return 0;
}