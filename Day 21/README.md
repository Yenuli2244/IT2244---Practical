# 📆 2025.06.06
# IPC Examples in C

This project demonstrates Inter-Process Communication (IPC) in C using:
- **Unnamed Pipes** (for parent-child communication)
- **Shared Memory** (for sharing calculated data like area)
- ```fork()``` **system call** (for creating child processes)

## Files & Descriptions
### 1. ```Pipes.c```
- **Functionality:**
    - Demonstrates basic usage of pipe to send multiple fixed messages from parent to child.
    - Parent writes three messages into the pipe.
    - Child reads and prints them.

![Pipes](https://github.com/user-attachments/assets/6f5540d4-59ab-4654-977d-83ec33e032eb)

### 2. ```Ex.c```
- **Functionality:**
     - Parent collects user inputs: Name, Reg No, and Age.
     - Sends them to the child via pipe.
     - Child reads and displays the input data.

- **IPC Mechanism:** Pipe
- **System Calls:** ```pipe()```, ```fork()```, ```write()```, ```read()```, ```wait()```

![Ex](https://github.com/user-attachments/assets/787eab36-491f-41ab-a5ae-e981a73bdbe6)

