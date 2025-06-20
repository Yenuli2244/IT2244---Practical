###  ```Homework.c```
- **Functionality:**
    - Parent takes a shape name and dimensions.
    - Sends shape data to child via pipe.
    - Child computes area based on shape type.
    - Stores result in **shared memory**.
    - Parent reads and displays area.

- **Supported Shapes:**
   - Circle
   - Rectangle
   - Square
   - Triangle

- **IPC Mechanism:**
    - Pipe (Parent to Child – to send input)
    - Shared Memory (Child to Parent – to send area result)

- **System Calls:**
    - ```pipe()```, ```fork()```, ```write()```, ```read()```, ```wait()```
    - ```shmget()```, ```shmat()```, ```shmdt()```, ```shmctl()```

![Exercise](https://github.com/user-attachments/assets/a7e25036-b938-4717-b560-fa8530dc0419)
