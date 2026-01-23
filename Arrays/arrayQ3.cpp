#include <iostream>
using namespace std;

int main() {
    int arr[]={2,4,55,4,654,45,435};
    int target =55;
    int res=-1;
    for(int i=0;i<7;i++){
        if(arr[i]==target){
            res=i;
        }
    }
    cout<<res<<endl;
    return 0;
}