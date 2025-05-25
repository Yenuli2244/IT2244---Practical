// variables
//int age;   This line **declares** a variable named `age` of type integer (int).
                //At this point, it does not have a value (it's uninitialized).

//age = 25;  This line **assigns** the value 25 to the variable `age`.
                //Now `age` holds the integer value 25.

//int age = 25;  This line **declares** a new integer variable `age` and **initializes** it to 25 in one step.
                //This is a shorthand for the two lines above.


#include<stdio.h>
int main(){
	int age=25;
	printf("%d/n",age);
	return 0;
}