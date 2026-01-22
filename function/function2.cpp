#include <iostream>
using namespace std;

int main() {
    // scope of variables in c++
    int p =5;
    int local=4;
    if (true){
        float p= 5.8;
        int local=3;
        cout<<local<<endl;
        cout <<p<<endl;  //5.7
    }
    cout <<p<<endl;
    cout<<local<<endl;
    return 0;
}