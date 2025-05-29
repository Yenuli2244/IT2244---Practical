# 🧪 Process Management in C – Exercises
This project contains multiple C programs demonstrating process creation and management using fork(), sleep(), exit(), and wait() system calls in Linux.

## 📂 File Descriptions
<pre>firstpro.c</pre>
**Description:** A simple program that demonstrates a sleep() delay.
![1](https://github.com/user-attachments/assets/60eb4835-c7b9-446b-9903-cc7d3d30b4b1)


single_fork_wait.c
Description:
Creates one child process. The child sleeps for 2 seconds and exits. The parent waits and prints the child's exit status.

exercise01_two_children.c
Exercise:

First child sleeps for 1 second

Second child sleeps for 3 seconds

Parent waits for both and prints a final message.

exercise02_exit_status_order.c
Exercise:

First child sleeps for 2 seconds, exits with status 2

Second child sleeps for 1 second, exits with status 1

Parent waits for both and prints the PID and exit status of the child that finishes first and second.

exercise03_grandchild.c
Exercise:

Parent creates a child

Child creates a grandchild

Grandchild sleeps for 2 seconds and exits with status 2

Child waits for grandchild, prints its status, then exits with status 55

Parent waits for child and prints its status
