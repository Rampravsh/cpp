# Arrays in C++

Arrays are a fundamental data structure in C++ that allow you to store a collection of elements of the same data type in contiguous memory locations.

## 1. What is an Array?

An array is a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

## 2. Declaring and Initializing Arrays

You can declare an array by specifying the data type of its elements, its name, and the number of elements it can hold.

```cpp
// Declaring an array of 5 integers
int myArray[5];
```

You can initialize an array at the time of declaration:

```cpp
// Initializing an array of 5 integers
int myArray[5] = {10, 20, 30, 40, 50};

// The size can be inferred from the initialization list
int anotherArray[] = {1, 2, 3, 4, 5};

// Initialize all elements to 0
int zeroArray[5] = {0};
```

## 3. Accessing Array Elements

You can access individual elements of an array using their index. The index of the first element is 0.

```cpp
#include <iostream>

int main() {
    int myArray[5] = {10, 20, 30, 40, 50};

    std::cout << myArray[0] << std::endl; // Accesses the first element (10)
    std::cout << myArray[2] << std::endl; // Accesses the third element (30)

    // Modifying an element
    myArray[4] = 100; // Changes the last element to 100
    std::cout << myArray[4] << std::endl;
    return 0;
}
```

## 4. Traversing an Array

You can use a loop to iterate over the elements of an array.

```cpp
#include <iostream>

int main() {
    int myArray[] = {1, 2, 3, 4, 5};

    // Using a for loop
    for (int i = 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;
    // Output: 1 2 3 4 5

    // Using a range-based for loop (C++11 and later)
    for (int element : myArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    // Output: 1 2 3 4 5
    return 0;
}
```

## 5. Multi-dimensional Arrays

C++ supports multi-dimensional arrays. The simplest form is the two-dimensional array, which is essentially an array of arrays.

```cpp
#include <iostream>

int main() {
    // Declaring and initializing a 2D array
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing an element
    std::cout << matrix[1][2] << std::endl; // Accesses the element in the second row, third column (7)
    return 0;
}
```

## Advanced Concepts

### 6. Arrays and Functions

You can pass arrays to functions. When you pass a C-style array to a function, it is passed as a pointer to its first element.

```cpp
#include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    printArray(myArray, 5); // Pass the array to the function
    return 0;
}
```

### 7. Pointers and Arrays

In C++, the name of an array can be treated as a constant pointer to the first element of the array.

```cpp
#include <iostream>

int main() {
    int myArray[] = {10, 20, 30};
    int* ptr = myArray; // ptr points to the first element

    std::cout << *ptr << std::endl; // Outputs 10
    std::cout << *(ptr + 1) << std::endl; // Outputs 20
    std::cout << *(myArray + 2) << std::endl; // Outputs 30
    return 0;
}
```

### 8. `std::array` and `std::vector`

While C-style arrays are a core feature, Modern C++ provides safer and often more convenient alternatives in the Standard Library:

*   **`std::array`**: A container that encapsulates fixed-size arrays. It provides benefits like bounds checking (with `.at()`) and behaves like a standard container, meaning it can be easily used with STL algorithms.

    ```cpp
    #include <iostream>
    #include <array>

    int main() {
        std::array<int, 5> myArray = {1, 2, 3, 4, 5};

        for (int element : myArray) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
        std::cout << "Size: " << myArray.size() << std::endl; // Get the size
        return 0;
    }
    ```

*   **`std::vector`**: A dynamic array that can grow or shrink in size. It is one of the most commonly used containers for collections of elements due to its flexibility.

    ```cpp
    #include <iostream>
    #include <vector>

    int main() {
        std::vector<int> myVector = {1, 2, 3};
        myVector.push_back(4); // Add an element to the end

        for (int element : myVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
        std::cout << "Size: " << myVector.size() << std::endl;
        return 0;
    }
    ```

It's generally recommended to use `std::vector` or `std::array` over raw C-style arrays in modern C++ code to avoid common pitfalls like buffer overflows, and to benefit from the features and safety they provide.
