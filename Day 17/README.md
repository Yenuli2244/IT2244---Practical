# 🧪 Process Management in C – Exercises
This project contains multiple C programs demonstrating process creation and management using fork(), sleep(), exit(), and wait() system calls in Linux.

## 📂 File Descriptions
<pre>firstpro.c</pre>
**Description:** A simple program that demonstrates a sleep() delay.

![1](https://github.com/user-attachments/assets/60eb4835-c7b9-446b-9903-cc7d3d30b4b1)

<pre>secndpro.c</pre>
**Description:** 
- Creates one child process.
- The child sleeps for 2 seconds and exits.
- The parent waits and prints the child's exit status.

![2](https://github.com/user-attachments/assets/47ac70a2-6b49-4e7e-80d7-87cb9dd5e1a4)

<pre>Exercise01.c</pre>
**Exercise:**
- First child sleeps for 1 second
- Second child sleeps for 3 seconds
- Parent waits for both and prints a final message.

![Exercise01](https://github.com/user-attachments/assets/3e02ff61-f71b-4e0d-9a79-21e0c56ecec0)

<pre>Exercise02.c</pre>
**Exercise:**
- First child sleeps for 2 seconds, exits with status 2
- Second child sleeps for 1 second, exits with status 1
- Parent waits for both and prints the PID and exit status of the child that finishes first and second.

![Exercise02](https://github.com/user-attachments/assets/bea1d9fa-581f-492f-8890-1910c4d85d01)

<pre>Exercise03.c</pre>
**Exercise:**
- Parent creates a child
- Child creates a grandchild
- Grandchild sleeps for 2 seconds and exits with status 2
- Child waits for grandchild, prints its status, then exits with status 55
- Parent waits for child and prints its status

![Exercise03](https://github.com/user-attachments/assets/a88e2f40-2ad0-47c2-9cfd-93cb80a00d37)
