//Example 10:
//C program to generate Pascal's Triangle.

Output:
no of rows =5
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
  
#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++)
            printf("  ");
        for (int j = 0; j <= i; j++)
            printf("%4d", fact(i) / (fact(j) * fact(i - j)));
        printf("\n");
    }

    return 0;
}