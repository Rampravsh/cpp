# Data Types in C++

In C++, data types are declarations for variables. This determines the type and size of data associated with variables. 

## Primitive Data Types

These are the most basic data types in C++.

*   `int`: Used for integers (whole numbers). Example: `int age = 21;`
*   `char`: Used for single characters. Example: `char grade = 'A';`
*   `float`: Used for single-precision floating-point numbers. Example: `float price = 19.99;`
*   `double`: Used for double-precision floating-point numbers. Example: `double pi = 3.14159;`
*   `bool`: Used for boolean values (`true` or `false`). Example: `bool is_student = true;`
*   `void`: Represents the absence of a type. It is used for functions that do not return a value.

## Derived Data Types

These data types are derived from the primitive data types.

*   **Arrays**: Collections of variables of the same type. Example: `int scores[5] = {98, 92, 85, 88, 95};`
*   **Pointers**: Variables that store the address of another variable. Example: `int* ptr = &age;`
*   **References**: An alias for an already existing variable. Example: `int& ref = age;`

## User-Defined Data Types

C++ allows users to define their own data types.

*   **struct**: A collection of variables of different data types under a single name.
    ```cpp
    struct Person {
        string name;
        int age;
    };
    ```
*   **union**: Similar to a struct, but all members share the same memory location.
*   **enum**: A set of named integer constants.
    ```cpp
    enum day { Mon, Tue, Wed, Thu, Fri, Sat, Sun };
    ```
*   **class**: A blueprint for creating objects. A class encapsulates data for the object and methods to manipulate that data.

## Standard Library Types: The `std::string` Case

A common point of confusion is the `string` type. In many other languages, strings are a primitive type. However, in C++, `std::string` is not a built-in type. It is a **class** from the C++ Standard Library.

You use it like a data type, but it is technically a powerful and flexible class that manages a sequence of characters for you. It handles memory allocation and provides many useful functions for working with text.

```cpp
#include <string> // Required to use std::string
std::string greeting = "Hello, World!";
```

## Type Modifiers

Modifiers are used to change the meaning of the base data types.

*   `signed`: The variable can hold positive and negative values.
*   `unsigned`: The variable can only hold non-negative values.
*   `short`: Halves the default size of the data type.
*   `long`: Doubles the default size of the data type.

## Type Casting

Converting a variable from one data type to another.

*   **Implicit Conversion**: Done automatically by the compiler.
*   **Explicit Conversion (Type Casting)**: Done by the programmer.
    ```cpp
    double num_double = 3.14;
    int num_int = (int)num_double; // C-style cast
    int num_int2 = static_cast<int>(num_double); // C++ style cast
    ```
