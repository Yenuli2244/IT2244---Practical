# 🧾 Process Creation in C using fork()
## 📌 Description
This collection of C programs demonstrates how to use the fork() system call to create processes in a UNIX-like environment. Each program explores different aspects of process creation, process ID (pid), and parent-child relationships.

## 📂 Programs
### ✅ 01: Basic ```fork()``` and ```getpid()```
<pre>#include<stdio.h>
#include<unistd.h>

int main(){
    printf("\nHello World!");
    int f = fork();
    int p = getpid();
    printf("\nThe pid is %d", p);
    printf("\nFork number %d\n", f);
    return 0;
}</pre>

- Demonstrates:
  - Forking a child process.
  - Printing process ID ```(getpid())```.
  - Value returned by ```fork()```.

![1](https://github.com/user-attachments/assets/f90d649b-c69a-48c2-b1cb-f992ce1c1190)

### ✅ 02: Simple Forking with Output
<pre>#include<stdio.h>
#include<unistd.h>

int main(){
    fork();
    printf("\nHello World!\n");
    return 0;
}</pre>

- Demonstrates:
  - Forking a child process.
  - Both parent and child print “Hello World!” — **output appears twice**.

![2](https://github.com/user-attachments/assets/fd3a2e70-ad9d-4bac-8c4c-52d821b7903c)

### ✅ 03: Child and Parent Identification
<pre>#include<stdio.h>
#include<unistd.h>

int main(){
    printf("\nHello World!\n");
    int f = fork();
    if(f == 0){
        printf("\nI'm child process!\n");
    } else {
        printf("\nI'm parent process\n");
    }
    return 0;
}</pre>

- Demonstrates:
  - Differentiating between parent and child using return value of ```fork()```.

![3](https://github.com/user-attachments/assets/36ccaee2-646e-4ce7-a676-91ed0b9261e0)

### ✅ 04: Multi-level Process Creation (Tree)
<pre>#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
    int f = fork(); // create B

    if (f == 0) {
        // Child B
        printf("\nI'm B\n");
        printf("My ppid: %d\n", getppid());
        printf("My pid: %d\n", getpid());
    } else {
        int k = fork(); // create C
        if (k == 0) {
            // Child C
            printf("\nI'm C\n");
            printf("My ppid: %d\n", getppid());
            printf("My pid: %d\n", getpid());
        } else {
            // Parent A
            wait(NULL);
            wait(NULL);
            printf("\nI'm A\n");
            printf("My pid: %d\n", getpid());
        }
    }

    return 0;
}</pre>
  
- Demonstrates:
 - Creating multiple children from a single parent.
 - ```getpid()``` and ```getppid()``` usage.
 - Synchronizing processes using ```wait()```.

![4](https://github.com/user-attachments/assets/13ce988b-5aef-45f2-a7b4-baad281c72bd)

