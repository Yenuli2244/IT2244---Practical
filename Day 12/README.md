# 📝 C Programming Basics
## 📚 Overview
This project contains beginner-level C programs that demonstrate the fundamentals of C programming, including printing, variables, data types, user input, and building a simple calculator.

## 📂 Contents
### ✅ 1. Hello World --> first.c
- **Purpose:** Prints ```"Hello World!"``` to the console.
- **Concepts:** ```#include```, ```main()```, ```printf()```
```printf("Hello World!\n");```

### ✅ 2. Variables --> second.c
- **Purpose:** Demonstrates variable declaration, assignment, and initialization.

<pre>int age;      // Declaration
age = 25;     // Assignment
int age = 25; // Declaration + Initialization</pre>

### ✅ 3. Printing Variable Value
- **Purpose:** Prints the value of a variable using ```printf```.

<pre>int age = 25;
printf("%d\n", age);</pre>

### ✅ 4. Copy Values Between Variables
- **Purpose:** Assigns value from one variable to another and prints both.

<pre>int firstNumber = 25;
int secondNumber = firstNumber;</pre>

### ✅ 5. Data Types --> DataTypes.c
- **Purpose:** Demonstrates usage of ```int```, ```double```, ```float``, and ```char```, and printing them.

<pre>int age = 10;
double number = 12.45;
float number1 = 10.9f;
char letter = 'D';</pre>

### ✅ 6. User Input --> UserInput.c
- **Purpose:** Takes input for different data types using ```scanf()```.

<pre>scanf("%d", &age);
scanf("%lf", &height);
scanf("%lf %c", &number, &alpha);</pre>

### ✅ 7. Simple Calculator --> calculator.c
- **Purpose:** Takes two integers and performs basic arithmetic operations.

<pre>printf("Sum: %d\n", (a + b));
printf("Sub: %d\n", (a - b));
printf("Mul: %d\n", (a * b));
printf("Div: %d\n", (a / b));
printf("Remainder: %d\n", (a % b));</pre>
