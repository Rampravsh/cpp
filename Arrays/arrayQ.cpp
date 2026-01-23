#include <iostream>
using namespace std;

int main() {
    int array[]={4,5,6,43};
    int size = sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int element:array){
        sum+=element;
    }

    cout<<sum<<endl;

    return 0;
}