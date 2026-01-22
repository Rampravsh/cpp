#include <iostream>
using namespace std;

int add(int a,int b=1,int c=4){
    return (a+b+c);
}

// int add(int a,int b){
//     return (a+b);
// }
int main() {
    cout<<add(2)<<endl;
    cout<<add(2,3)<<endl;
    cout<<add(2,4,5)<<endl;
    return 0;
}