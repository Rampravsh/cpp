# C++ Functions

A function is a block of code that performs a specific task. Functions are used to break down large programs into smaller, more manageable pieces of code. This makes the code easier to read, debug, and maintain.

## Basic Function

A function has a name, a return type, and a list of parameters. The return type specifies the type of value that the function returns. The parameter list specifies the number and types of values that are passed to the function.

### Declaration and Definition

A function must be declared before it can be used. The function declaration tells the compiler the function's name, return type, and parameter list. The function definition contains the actual code that is executed when the function is called.

**Syntax:**

```cpp
return_type function_name(parameter_list) {
    // code to be executed
    return value;
}
```

**Example:**

```cpp
#include <iostream>

// Function declaration
int add(int num1, int num2);

int main() {
    int result = add(5, 3); // Function call
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}

// Function definition
int add(int num1, int num2) {
    return num1 + num2;
}
```

## Function Overloading

C++ allows you to define multiple functions with the same name, as long as they have different parameter lists. This is called function overloading.

**Example from `function.cpp`:**

```cpp
#include <iostream>
using namespace std;

// Function with two integer parameters
int add(int num1, int num2) {
    return num1 + num2;
}

// Overloaded function with three integer parameters
int add(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

// Overloaded function with two float parameters
// Note: The return type in the original file should probably be float as well.
float add(float num1, float num2) {
    return num1 + num2;
}

int main() {
    cout << add(2, 6) << endl;
    cout << add(2, 6, 8) << endl;
    cout << add(2.3f, 5.0f) << endl; // Use 'f' for float literals
    return 0;
}
```

In this example, we have three functions named `add`, but they have different numbers or types of parameters. The compiler determines which function to call based on the arguments provided.

## Function Templates

Function templates allow you to write a single function that can work with different data types.

**Syntax:**

```cpp
template <typename T>
T function_name(T param1, T param2) {
    // code
}
```

**Example:**

```cpp
#include <iostream>

template <typename T>
T add(T num1, T num2) {
    return num1 + num2;
}

int main() {
    std::cout << "Int sum: " << add(5, 10) << std::endl;
    std::cout << "Double sum: " << add(5.5, 10.2) << std::endl;
    return 0;
}
```

## Recursion

Recursion is a technique in which a function calls itself. This can be a powerful tool for solving problems that can be broken down into smaller, self-similar subproblems.

**Example: Factorial**

```cpp
#include <iostream>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    std::cout << "Factorial of 5 is: " << factorial(5) << std::endl;
    return 0;
}
```

## Lambda Functions (C++11 and later)

Lambda functions are anonymous functions that can be defined and used inline. They are particularly useful for short, one-off operations.

**Syntax:**

```cpp
[capture_clause](parameters) -> return_type {
    // function body
};
```

**Example:**

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use a lambda function with for_each to print each element
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    return 0;
}
```

## Pointers to Functions

You can declare a pointer that points to a function. This allows you to pass functions as arguments to other functions or store them in data structures.

**Syntax:**

```cpp
return_type (*pointer_name)(parameter_types);
```

**Example:**

```cpp
#include <iostream>

void sayHello() {
    std::cout << "Hello!" << std::endl;
}

int main() {
    // Declare a function pointer and assign it the address of the sayHello function
    void (*funcPtr)() = sayHello;

    // Call the function through the pointer
    funcPtr();

    return 0;
}
```
