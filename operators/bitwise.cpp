#include <iostream>

int main() {
    // Let's use simple numbers
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011
    int result;

    std::cout << "a = " << a << " (Binary: 0101)" << std::endl;
    std::cout << "b = " << b << " (Binary: 0011)" << std::endl;
    std::cout << "-------------------------" << std::endl;

    // Bitwise AND (&)
    // 0101
    // & 0011
    // ------
    //   0001  (which is 1 in decimal)
    result = a & b;
    std::cout << "a & b = " << result << std::endl;

    // Bitwise OR (|)
    // 0101
    // | 0011
    // ------
    //   0111  (which is 7 in decimal)
    result = a | b;
    std::cout << "a | b = " << result << std::endl;

    // Bitwise XOR (^)
    // 0101
    // ^ 0011
    // ------
    //   0110  (which is 6 in decimal)
    result = a ^ b;
    std::cout << "a ^ b = " << result << std::endl;

    // Bitwise NOT (~)
    // ~ 0000 0101
    // -----------
    //   1111 1010 (in two's complement, this is -6)
    result = ~a;
    std::cout << "~a = " << result << std::endl;

    // Left Shift (<<)
    // 0101 << 1  ->  1010 (which is 10 in decimal)
    result = a << 1;
    std::cout << "a << 1 = " << result << std::endl;

    // Right Shift (>>)
    // 0101 >> 1  ->  0010 (which is 2 in decimal)
    result = a >> 1;
    std::cout << "a >> 1 = " << result << std::endl;

    return 0;
}