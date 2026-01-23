#include <iostream>
using namespace std;

int main() {
    int arr[5]={45,45,56,554,65};
    int max=arr[0];
    for(int elem:arr){
        if (elem>max){
            max=elem;
        }
    }
    cout<<max<<endl;
    return 0;
}