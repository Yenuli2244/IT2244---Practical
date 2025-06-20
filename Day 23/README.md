# 📆 2025.06.16
# Multi-threaded Programs in C using pthread

This readme file contains several basic examples demonstrating how to use POSIX threads (`pthread`) in C. Each program showcases different aspects of thread creation, execution, and synchronization.


## 📁 Files Overview

### 1. `Threads.c`
- **Description**: A simple program that creates a thread which prints "Hello World" after a delay.
- **Concepts Covered**: 
  - Thread creation with `pthread_create`
  - Waiting for thread completion using `pthread_join`

![thread](https://github.com/user-attachments/assets/2d29d1bc-6f96-43fe-9b21-f41fb971619a)


### 2. `MultiThreaded.c`
- **Description**: Demonstrates creating multiple threads, each printing a different message.
- **Concepts Covered**:
  - Passing arguments to threads
  - Creating and joining multiple threads

![multithreaded](https://github.com/user-attachments/assets/7a0c4a7e-e3ea-4a61-b282-1ec57e3e2e7e)


### 3. `Thread1.c`
- **Description**: A scalable example where three threads are created using a loop, and each prints a message.
- **Concepts Covered**:
  - Thread management using arrays
  - Loop-based thread creation

![thread1](https://github.com/user-attachments/assets/5e158fc9-a4c7-459c-a71e-cbc5efd99fa7)


### 4. `Thread2.c`
- **Description**: Splits the task of summing an array into two threads. Each thread calculates a part of the sum.
- **Concepts Covered**:
  - Dividing work among threads
  - Parallel computation
  - Shared variables (without mutex — for simplicity)

![thread2](https://github.com/user-attachments/assets/766534c6-c3ef-419b-93e1-7f11a7d4b69c)


