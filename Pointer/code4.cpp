#include <iostream>
using namespace std;

int main()
{
    // pointer arithmetic

    int arr[] = {1, 2, 3, 4, 5};
    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;
    //Increment(++) /decrement(--)
    ptr++;
    cout << ptr << endl;
    //Add/Subtract Number

    ptr+=4;
    cout<<ptr<<endl;
    return 0;
}