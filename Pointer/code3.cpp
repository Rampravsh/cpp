#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr << endl;  // address of arr[0]
    cout << *arr << endl; // pointer=>1

    int a = 10, b = 10;
    int *ptr = &a;
    ptr = &b; // ye thik hai ye error nahi dega

    // arr=&a; //constant pointer ese hum change nahi kar sakte hai 

    
    return 0;
}