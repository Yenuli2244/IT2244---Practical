/*Example 9:
Write a C program that:
Accepts an array of integers from the user.
Finds and displays the maximum and minimum values in the array.*/

#include <stdio.h>

int main() {
    int n, i;
    int numbers[100], min, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    min = max = numbers[0];  // Initialize min and max

    for (i = 1; i < n; i++) {
        if (numbers[i] < min)
            min = numbers[i];
        if (numbers[i] > max)
            max = numbers[i];
    }

    printf("Minimum value = %d\n", min);
    printf("Maximum value = %d\n", max);

    return 0;
}