/*Example 7:
Write a C program that:
Accepts two strings as input from the user.
Concatenates the two strings Displays the concatenated result.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Concatenate strings
    strcpy(result, str1);
    strcat(result, str2);

    printf("Concatenated string: %s\n", result);

    return 0;
}
