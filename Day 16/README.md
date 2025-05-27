# 🌱 Multi-Process Computation Program in C

## 🖇️ Description

This C program demonstrates the use of multiple processes using the `fork()` system call in Unix/Linux. The program performs three different computations using three child processes:

- **Child Process 1**: Calculates the factorial of a number `a`.
- **Child Process 2**: Generates the first `b` Fibonacci numbers.
- **Child Process 3**: Checks whether the number `c` is a prime number.

The parent process waits for all child processes to complete and then displays a final message.

## 🖇️ Features

- Demonstrates inter-process behavior using `fork()`
- Uses global variables to share user input
- Includes prime number checking logic
- Displays process IDs (PID and PPID) for each process

![1](https://github.com/user-attachments/assets/1c86d13b-e551-4676-9b05-cf13d015f57a)


