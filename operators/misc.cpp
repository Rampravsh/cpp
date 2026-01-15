#include <iostream>
#include <string>
#include <vector>

// Demonstrates various miscellaneous operators in C++

// A simple class to demonstrate sizeof and member access operators
class MyClass {
public:
    int x;
    double y;
};

int main() {
    // --- sizeof Operator ---
    // Returns the size in bytes of a data type or a variable.
    std::cout << "--- sizeof Operator ---" << std::endl;
    int a = 10;
    char c = 'A';
    double d = 3.14;
    MyClass obj;

    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;        // Size of type
    std::cout << "Size of variable 'a': " << sizeof(a) << " bytes" << std::endl;  // Size of variable
    std::cout << "Size of char: " << sizeof(c) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(d) << " bytes" << std::endl;
    std::cout << "Size of MyClass object: " << sizeof(obj) << " bytes" << std::endl;
    std::cout << std::endl;

    // --- Ternary (Conditional) Operator (?:) ---
    // A shorthand for an if-else statement. Syntax: condition ? expression1 : expression2;
    std::cout << "--- Ternary Operator ---" << std::endl;
    int x = 20, y = 10;
    int max_val = (x > y) ? x : y;
    std::cout << "The greater value between " << x << " and " << y << " is: " << max_val << std::endl;

    std::string result_str = (max_val % 2 == 0) ? "Even" : "Odd";
    std::cout << "The max value (" << max_val << ") is " << result_str << std::endl;
    std::cout << std::endl;

    // --- Address-of Operator (&) and Dereference Operator (*) ---
    // & gets the memory address of a variable.
    // * (dereference) gets the value stored at a memory address (used with pointers).
    std::cout << "--- Address (&) and Dereference (*) Operators ---" << std::endl;
    int var = 100;
    int* ptr = &var; // ptr is a pointer that now holds the memory address of 'var'

    std::cout << "Value of 'var': " << var << std::endl;
    std::cout << "Memory address of 'var' (&var): " << &var << std::endl;
    std::cout << "Value of pointer 'ptr' (stores the address): " << ptr << std::endl;
    std::cout << "Value at the address pointed to by 'ptr' (*ptr): " << *ptr << std::endl;
    std::cout << std::endl;
    
    // --- Comma Operator (,) ---
    // Evaluates a sequence of expressions, and the result of the entire expression
    // is the result of the rightmost expression.
    std::cout << "--- Comma Operator ---" << std::endl;
    int i = 5, j = 10;
    // The comma operator in the line below evaluates (i = i * 2), then (j = j + 5),
    // and the final result of the whole expression (which is assigned to k) is the result of the last part.
    int k = (i = i * 2, j = j + 5, j); 
    std::cout << "After comma operation: i=" << i << ", j=" << j << ", k=" << k << std::endl;
    std::cout << std::endl;

    // --- Type Casting Operators ---
    // Converts a value from one data type to another.
    std::cout << "--- Type Casting ---" << std::endl;
    double pi = 3.14159;
    // C-style cast (less safe, avoid in modern C++)
    int int_pi_c_style = (int)pi; 
    std::cout << "C-style cast of " << pi << " to int: " << int_pi_c_style << std::endl;

    // C++ static_cast (safer, preferred)
    int int_pi_static_cast = static_cast<int>(pi);
    std::cout << "static_cast of " << pi << " to int: " << int_pi_static_cast << std::endl;
    std::cout << std::endl;
    
    return 0;
}
