#include <iostream>
#include <vector>
#include <array>
#include <cstring>

// Function to print a 1D array
void printArray(int arr[], int size) {
    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to demonstrate passing a 2D array
void print2DArray(int arr[][3], int rows) {
    std::cout << "2D Array elements: " << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // --- Basic 1D Arrays ---
    std::cout << "--- Basic 1D Arrays ---" << std::endl;

    // Declaration and initialization
    int basic_array[5] = {10, 20, 30, 40, 50};

    // Accessing elements
    std::cout << "First element: " << basic_array[0] << std::endl;
    std::cout << "Third element: " << basic_array[2] << std::endl;

    // Getting the size of an array
    int size = sizeof(basic_array) / sizeof(basic_array[0]);
    std::cout << "Size of the array: " << size << std::endl;

    // Iterating with a for loop
    printArray(basic_array, size);

    // Iterating with a range-based for loop (C++11 and later)
    std::cout << "Array elements (using range-based for): ";
    for (int element : basic_array) {
        std::cout << element << " ";
    }
    std::cout << std::endl << std::endl;

    // --- 2D Arrays (Matrices) ---
    std::cout << "--- 2D Arrays (Matrices) ---" << std::endl;

    // Declaration and initialization of a 2x3 matrix
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing elements
    std::cout << "Element at row 1, col 2: " << matrix[1][2] << std::endl;

    // Iterating through a 2D array
    print2DArray(matrix, 2);
    std::cout << std::endl;

    // --- Pointers and Arrays ---
    std::cout << "--- Pointers and Arrays ---" << std::endl;
    int numbers[] = {5, 10, 15, 20};
    int* ptr = numbers; // Array name acts as a pointer to the first element

    std::cout << "Value at ptr: " << *ptr << std::endl; // Dereferences the pointer, gets 5
    std::cout << "Value at numbers[0]: " << numbers[0] << std::endl;

    // Pointer arithmetic
    ptr++; // Move to the next element
    std::cout << "Value at ptr after increment: " << *ptr << std::endl; // Gets 10
    std::cout << std::endl;

    // --- C-style Strings (Character Arrays) ---
    std::cout << "--- C-style Strings (Character Arrays) ---" << std::endl;
    char greeting[] = "Hello"; // C-style string (null-terminated char array)
    
    std::cout << "Greeting message: " << greeting << std::endl;
    std::cout << "Length of greeting: " << strlen(greeting) << std::endl; // from <cstring>
    std::cout << std::endl;


    // --- Advanced: Modern C++ Array Alternatives ---
    std::cout << "--- Modern C++ Array Alternatives ---" << std::endl;

    // std::vector: A dynamic array
    std::cout << "std::vector (dynamic array):" << std::endl;
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6); // Add an element

    std::cout << "Vector elements: ";
    for (int element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    std::cout << "Vector size: " << vec.size() << std::endl;
    std::cout << std::endl;


    // std::array: A fixed-size, type-safe array (C++11 and later)
    std::cout << "std::array (fixed-size array):" << std::endl;
    std::array<int, 5> modern_array = {100, 200, 300, 400, 500};

    std::cout << "std::array elements: ";
    for (int element : modern_array) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    std::cout << "std::array size: " << modern_array.size() << std::endl;


    return 0;
}
