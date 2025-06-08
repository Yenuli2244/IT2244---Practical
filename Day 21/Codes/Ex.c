/*Exercise

1.read two input from user(Parent process)
 name:
 reg no:
 age:
 
2.print the output from the child(child process)
 name: abc
 reg no: 2021/ICT/06
 age: 25*/
 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

#define MSGSIZE 16

char* name;
char* regno;
char* age;

int main(){
	
	int p[2], f, i;
	char name[MSGSIZE], regno[MSGSIZE], age[MSGSIZE]; 
	
	if(pipe(p)<0){
		perror("Pipe Failed");
		exit(1);
	}
	
	if((f=fork()) == 0){
		close(p[1]);
		for(i=0; i<3; i++){
			char inbuf[MSGSIZE];
			read(p[0], inbuf, MSGSIZE);
			printf("%s", inbuf);
		}
	}
	
	if(f < 0){
		
		
	}
	else if(f == 0){
		printf("Name: ", &name);
		printf("RegNo: ", &regno);
		printf("Age: ", &age);
	}
	else{
		close(p[0]);
		printf("Name:");
		scanf("%s",&name)
		wait(NULL);
	
	}
	
	return 0;
}