#include <iostream>
using namespace std;
int add(int num1,int num2){
    return num1+num2;
}
int add(int num1,int num2,int num3){
    return num1+num2+num3;
}

int add(float num1,float num2){
    float sum=num1+num2;
    return sum;
}


int main() {
    cout<< add(2,6)<<endl;
    cout<< add(2,6,8)<<endl;
    cout<<add(2.3,5);
    return 0;
}