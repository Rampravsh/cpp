#include <iostream>

// Function to demonstrate pass-by-value
void passByValue(int x) {
    x = x + 10;
    std::cout << "Inside passByValue, x = " << x << std::endl;
}

// Function to demonstrate pass-by-reference
void passByReference(int &x) {
    x = x + 10;
    std::cout << "Inside passByReference, x = " << x << std::endl;
}

int main() {
    int val = 5;
    std::cout << "Before passByValue, val = " << val << std::endl;
    passByValue(val);
    std::cout << "After passByValue, val = " << val << std::endl;

    std::cout << "\n-----------------\n" << std::endl;

    int ref = 5;
    std::cout << "Before passByReference, ref = " << ref << std::endl;
    passByReference(ref);
    std::cout << "After passByReference, ref = " << ref << std::endl;

    return 0;
}
