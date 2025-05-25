/*Example 2:
write a code for small astrology based on your life path number for that  get date of birth 
from user then calculate life path number.(use switch case)
output:
     case 1-Date: 23
	 case 2-Date: 29

     calculation for life path number:                    
			  a=date%10     3                                
			  b=date/10     2
			  c=a+b         5
	  if life path number :
			  1:Lucky
			  2:Carefuly do your work
			  3:Storger
			  4:Happy
			  5:Can get help
			  6:Doubt
			  7:Sad 
			  8:Like
			  9:Courage*/
			  
#include <stdio.h>

int main() {
    int date, a, b, c;
    printf("Enter your birth date (1-31): ");
    scanf("%d", &date);

    a = date % 10;
    b = date / 10;
    c = a + b;

    if (c > 9) c = (c % 10) + (c / 10);  // Reduce to single digit if needed

    switch (c) {
        case 1: 
		printf("Lucky\n"); 
		break;
		
        case 2: 
		printf("Carefully do your work\n"); 
		break;
		
        case 3: 
		printf("Stronger\n"); 
		break;
		
        case 4: 
		printf("Happy\n"); 
		break;
		
        case 5: 
		printf("Can get help\n"); 
		break;
		
        case 6: 
		printf("Doubt\n"); 
		break;
		
        case 7: 
		printf("Sad\n"); 
		break;
		
        case 8: 
		printf("Like\n"); 
		break;
		
        case 9: 
		printf("Courage\n"); 
		break;
		
        default: 
		printf("Invalid life path number\n");
    }

    return 0;
}

