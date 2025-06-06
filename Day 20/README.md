# 📆 2025.06.02

# Inter-Process Communication (IPC) Examples in C
This project demonstrates inter-process communication using two different methods in C:
- System V Shared Memory using ```shmget```, ```shmat```, etc. (Writer and Reader processes)
- Memory Mapping (```mmap```) for communication between parent and child processes via ```fork```.

### 1. System V Shared Memory (Writer and Reader)
**Files**
- ```writer.c``` – Writes data to shared memory.
- ```reader.c``` – Reads data from shared memory.

**How It Works**
- A shared memory segment is created using ```shmget```.
- The writer process writes user input to this memory.
- The reader process attaches to the same memory segment and reads the data.
- After reading, the reader deletes the shared memory segment using ```shmctl```.

![WriteRead](https://github.com/user-attachments/assets/41e310fc-c06a-44c0-8be2-e33a88f78220)

### 2. Memory Mapping with ```mmap```
**File**
```sharedEx.c```

**How It Works**
- A shared anonymous memory region is created using ```mmap```.
- A child process is created with ```fork```.
- The child writes a string to the shared memory.
- The parent waits for the child to finish, then reads the data from memory.

![SharedEx](https://github.com/user-attachments/assets/e297ee56-da9b-4f95-ac99-a0af1075a0fe)
