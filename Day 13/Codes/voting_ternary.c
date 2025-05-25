//Example: Enter your age and verify your aligible or not for election voting using ternary operator.
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("Eligible to vote\n") : printf("Not eligible to vote\n");

    return 0;
}