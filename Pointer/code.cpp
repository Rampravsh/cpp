#include <iostream>
using namespace std;

int main() {
    int a =10;
    cout<< &a<<endl;

    int* ptr =&a;
    cout<<ptr<<endl;

    float price= 100.25f;
    float*ptr2=&price;
    cout <<"ptr2: " << ptr2 <<"\n&price: "<<&price<<endl;
    return 0;
}