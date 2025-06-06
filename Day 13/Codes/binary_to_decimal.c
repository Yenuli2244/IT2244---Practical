/*Example 8:
Write a C program that takes a binary number (as an integer) as input and 
converts it to its decimal equivalent.*/

#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}