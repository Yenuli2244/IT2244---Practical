/*Exercise

1.read two input from user(Parent process)
 name:
 reg no:
 age:
 
2.print the output from the child(child process)
 name: abc
 reg no: 2021/ICT/06
 age: 25*/
 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define MSGSIZE 50

int main() {
    int p[2]; // Pipe file descriptors
    pid_t pid;
    char name[MSGSIZE], regno[MSGSIZE], age[MSGSIZE];

    if (pipe(p) < 0) {
        perror("Pipe Failed");
        exit(1);
    }

    pid = fork();

    if (pid < 0) {
        perror("Fork Failed");
        exit(1);
    }

    if (pid == 0) { // Child process
        close(p[1]); // Close write end

        char inbuf[MSGSIZE];

        read(p[0], inbuf, MSGSIZE);
        printf("Name: %s\n", inbuf);

        read(p[0], inbuf, MSGSIZE);
        printf("Reg No: %s\n", inbuf);

        read(p[0], inbuf, MSGSIZE);
        printf("Age: %s\n", inbuf);

        close(p[0]);
    } else { // Parent process
        close(p[0]); // Close read end

        printf("Enter Name: ");
        scanf("%s", name);

        printf("Enter Reg No: ");
        scanf("%s", regno);

        printf("Enter Age: ");
        scanf("%s", age);

        write(p[1], name, MSGSIZE);
        write(p[1], regno, MSGSIZE);
        write(p[1], age, MSGSIZE);

        close(p[1]);

        wait(NULL); // Wait for child to finish
    }

    return 0;
}          