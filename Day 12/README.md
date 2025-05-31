# 📆 2025.05.16
# 📝 C Programming Basics
## 📚 Overview
This project contains beginner-level C programs that demonstrate the fundamentals of C programming, including printing, variables, data types, user input, and building a simple calculator.

## 📂 Contents
### ✅ 1. Hello World --> first.c
- **Purpose:** Prints ```"Hello World!"``` to the console.
- **Concepts:** ```#include```, ```main()```, ```printf()```
```printf("Hello World!\n");```

![first](https://github.com/user-attachments/assets/b6098ed4-67cc-4a8a-a64a-7cdca8a884dd)

### ✅ 2. Variables 
- **Purpose:** Demonstrates variable declaration, assignment, and initialization.

<pre>int age;      // Declaration
age = 25;     // Assignment
int age = 25; // Declaration + Initialization</pre>

### ✅ 3. Printing Variable Value --> second.c
- **Purpose:** Prints the value of a variable using ```printf```.

<pre>int age = 25;
printf("%d\n", age);</pre>

![second](https://github.com/user-attachments/assets/f87618f9-b872-47e9-883d-30c73ea6f0dd)

### ✅ 4. Copy Values Between Variables --> third.c
- **Purpose:** Assigns value from one variable to another and prints both.

<pre>int firstNumber = 25;
int secondNumber = firstNumber;</pre>

![third](https://github.com/user-attachments/assets/0bcf1426-280f-4f28-93b1-5a7bd29b5866)

### ✅ 5. Data Types --> DataTypes.c
- **Purpose:** Demonstrates usage of ```int```, ```double```, ```float``, and ```char```, and printing them.

<pre>int age = 10;
double number = 12.45;
float number1 = 10.9f;
char letter = 'D';</pre>

![DataTypes](https://github.com/user-attachments/assets/8254fb10-06c3-4081-8094-d5b105ef9aa9)

### ✅ 6. User Input --> UserInput.c
- **Purpose:** Takes input for different data types using ```scanf()```.

<pre>scanf("%d", &age);
scanf("%lf", &height);
scanf("%lf %c", &number, &alpha);</pre>

![UserInput](https://github.com/user-attachments/assets/1111364c-efed-420d-bcd8-9a0311f22eab)

### ✅ 7. Simple Calculator --> calculator.c
- **Purpose:** Takes two integers and performs basic arithmetic operations.

<pre>printf("Sum: %d\n", (a + b));
printf("Sub: %d\n", (a - b));
printf("Mul: %d\n", (a * b));
printf("Div: %d\n", (a / b));
printf("Remainder: %d\n", (a % b));</pre>

![calculator](https://github.com/user-attachments/assets/6d9651f7-41b0-4692-b798-8c63ef0980c8)

