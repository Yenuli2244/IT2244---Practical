/*Example 3:
Give list of numbers then calculate the summation and multiplication using for loop.
 Example:-
    1 2 3 4 5                             
	summation = 15                         
    multiplication =120*/
	
#include <stdio.h>

int main() {
    int n, num, sum = 0, product = 1;

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
        product *= num;
    }

    printf("Summation = %d\n", sum);
    printf("Multiplication = %d\n", product);

    return 0;
}