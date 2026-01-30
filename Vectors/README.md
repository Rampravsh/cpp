# C++ Vectors

Vectors in C++ are dynamic arrays that have the ability to resize themselves automatically when an element is inserted or deleted, with their storage being handled automatically by the container.

## Declaration

To use vectors, you need to include the `<vector>` header file.

```cpp
#include <vector>

// Creates an empty vector of integers
std::vector<int> myVector;

// Creates a vector of size 5, initialized with 0
std::vector<int> vec(5);

// Creates a vector and initializes it with some values
std::vector<int> vec2 = {1, 2, 3, 4, 5};

// Creates a vector of size 5, with all elements as 10
std::vector<int> vec3(5, 10);
```

## Basic Operations

### Adding Elements

You can add elements to a vector using the `push_back()` function. This will add the element to the end of the vector.

```cpp
std::vector<int> myVector;
myVector.push_back(10);
myVector.push_back(20);
myVector.push_back(30);
```

### Accessing Elements

Elements can be accessed using the `[]` operator or the `at()` function. `at()` provides bounds checking and will throw an exception if you try to access an out-of-bounds element.

```cpp
std::vector<int> myVector = {10, 20, 30};

int firstElement = myVector[0]; // Access the first element
int secondElement = myVector.at(1); // Access the second element
```

### Size and Capacity

-   `size()`: Returns the number of elements in the vector.
-   `capacity()`: Returns the size of the storage space currently allocated for the vector, expressed in terms of elements.

```cpp
std::vector<int> myVector;
myVector.push_back(1);
myVector.push_back(2);

std::cout << "Size: " << myVector.size() << std::endl; // Output: 2
std::cout << "Capacity: " << myVector.capacity() << std::endl; // Output might be 2 or more
```

### Removing Elements

`pop_back()` removes the last element from the vector.

```cpp
std::vector<int> myVector = {10, 20, 30};
myVector.pop_back(); // Vector is now {10, 20}
```

## Iterators

Iterators are used to point to the memory addresses of vector elements. They are used to traverse the vector.

-   `begin()`: Returns an iterator to the beginning of the vector.
-   `end()`: Returns an iterator to the theoretical element that follows the last element.

```cpp
std::vector<int> myVector = {1, 2, 3, 4, 5};

for(std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
    std::cout << *it << " ";
}
// Output: 1 2 3 4 5
```

You can also use a range-based for loop which is simpler:
```cpp
for(int element : myVector) {
    std::cout << element << " ";
}
```

## Advanced Operations

### Inserting Elements

`insert()` inserts new elements before the element at the specified position.

```cpp
std::vector<int> myVector = {10, 20, 30};
myVector.insert(myVector.begin() + 1, 15); // Insert 15 at index 1
// myVector is now {10, 15, 20, 30}
```

### Erasing Elements

`erase()` removes from the vector either a single element (position) or a range of elements (`[first, last)`).

```cpp
std::vector<int> myVector = {10, 15, 20, 30};
myVector.erase(myVector.begin() + 1); // Erase element at index 1
// myVector is now {10, 20, 30}

myVector.erase(myVector.begin(), myVector.begin() + 2); // Erase first two elements
// myVector is now {30}
```

### Other Useful Functions

-   `empty()`: Returns `true` if the vector is empty.
-   `clear()`: Removes all elements from the vector.
-   `resize()`: Changes the number of elements stored in the vector.
-   `front()`: Returns a reference to the first element.
-   `back()`: Returns a reference to the last element.

## Sorting

You can sort a vector using `std::sort` from the `<algorithm>` header.

```cpp
#include <algorithm>
#include <vector>

std::vector<int> myVector = {5, 2, 8, 1, 9};
std::sort(myVector.begin(), myVector.end());
// myVector is now {1, 2, 5, 8, 9}
```

## 2D Vectors

A 2D vector is a vector of vectors.

```cpp
// Create a 3x4 2D vector initialized to 0
std::vector<std::vector<int>> matrix(3, std::vector<int>(4, 0));

matrix[0][0] = 1;

for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
        std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
}
```
