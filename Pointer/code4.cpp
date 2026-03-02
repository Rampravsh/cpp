#include <iostream>
using namespace std;

int main()
{
    // pointer arithmetic

    int arr[] = {1, 2, 3, 4, 5};

    // cout << *arr << endl;
    // cout << *(arr + 1) << endl;
    // cout << *(arr + 2) << endl;
    // cout << *(arr + 3) << endl;
    // cout << *(arr + 4) << endl;

    // int a = 10;
    // int *ptr = &a;
    // cout << ptr << endl;
    // //Increment(++) /decrement(--)
    // ptr++;
    // cout << ptr << endl;
    // //Add/Subtract Number

    // ptr+=4;
    // cout<<ptr<<endl;


    int*ptr2; //100
    int*ptr1=ptr2+2; //108
    cout <<ptr1-ptr2<<endl; //2
    int*ptr3;
    cout << ptr3-ptr2 << endl; //garbage value
    return 0;
}