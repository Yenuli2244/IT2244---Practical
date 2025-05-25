/*EXAMPLE 5:
Write a C program to generate and print the Fibonacci series up to a specified 
number of terms. The program should take the number of terms as input from the 
user and then display the corresponding Fibonacci sequence.*/

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
