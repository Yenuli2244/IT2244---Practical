# 🧵 Multi-threading in C – Program Collection
This project includes 5 simple C programs that demonstrate the use of POSIX threads (pthread) for various multi-threading operations.

## 📘 Program Descriptions
### ✅ Q1: Basic Thread Creation and Join
**File: ```Q1.c```**

Creates two threads. Each thread prints a message that it is running. The main thread waits for both threads to finish.

![Q1](https://github.com/user-attachments/assets/4f888656-f39a-4ccf-a15a-e5e38b5f69e1)

### ✅ Q2: Print Thread IDs of 5 Threads
**File: ```Q2.c```**

Creates 5 threads. Each thread prints its unique thread ID and then exits. The main thread joins all and prints a final message.

![Q2](https://github.com/user-attachments/assets/4c9b8a95-62b9-49b2-aec8-ed47bc1af42b)

### ✅ Q3: Thread Printing 1 to 10 with Delay
**File: ```Q3.c```**

Creates one thread which prints numbers from 1 to 10, with a delay of 1 second between prints. Main thread waits for it to complete.

![Q3](https://github.com/user-attachments/assets/98d6f03f-e387-462a-a28c-5b127919af91)

### ✅ Q4: Shared Counter with Increment and Decrement Threads
**File: ```Q4.c```**

- One thread increments a global counter 100 times.
- Another thread decrements the same counter 100 times.
- Mutex lock is used to avoid race conditions.

![Q4](https://github.com/user-attachments/assets/79419134-7229-45d0-9f74-7156fd07db0e)

### ✅ Q5: Square Calculation Using Thread Return Value
**File: ```Q5.c```**

A thread is created to square a number. It returns the result using ```pthread_exit```, and the main thread collects it via ```pthread_join```.

![Q5](https://github.com/user-attachments/assets/7b0e7da2-f624-4678-bb22-bee7caeea487)


