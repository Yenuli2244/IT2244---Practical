//Example 1: Enter the value between 1 to 7 and create a program for following output:
//Enter the number between 1 to 7 : 1
//Today is Sunday!

#include <stdio.h>

int main() {
    int day;
    printf("Enter number between 1 to 7: ");
    scanf("%d", &day);

    switch(day) {
        case 1: 
		printf("Today is Sunday!\n"); 
		break;
		
        case 2: 
		printf("Today is Monday!\n"); 
		break;
		
        case 3: 
		printf("Today is Tuesday!\n"); 
		break;
		
        case 4: 
		printf("Today is Wednesday!\n"); 
		break;
		
        case 5: 
		printf("Today is Thursday!\n"); 
		break;
		
        case 6: 
		printf("Today is Friday!\n"); 
		break;
		
        case 7: 
		printf("Today is Saturday!\n"); 
		break;
		
        default: 
		printf("Invalid input!\n");
    }

    return 0;
}