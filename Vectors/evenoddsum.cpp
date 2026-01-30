#include <iostream>

using namespace std;

int main() {
    int array[]={1,243,45,3,2,4,4,5,4,3};
    int odd_sum=0;
    int even_sum=0;
    for(int i=0;i<10;i++){
        if(i%2==0){
            even_sum+=array[i];
        }else{
            odd_sum+=array[i];
        }
    }
    cout<<even_sum-odd_sum<<endl;
    return 0;
}