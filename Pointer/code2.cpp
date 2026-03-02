#include <iostream>
using namespace std;

// void changeA(int a)
// { // pass by value
//     a = 20;
// };

void changeA(int *ptr)
{ // pass by reference using pointer
    *ptr = 20;
};


void changeA(int &b)
{ // pass by reference using alias
    b = 20;
};



int main()
{
    int a = 10;
    changeA(a);
    cout << "inside main function after pass by reference using alias: " << a << endl;

    changeA(&a);
    cout << "inside main function after pass by reference using pointer: " << a << endl;
    return 0;
}