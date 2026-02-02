#include <iostream>
using namespace std;

int main() {
    int array[]={3,4,2,4,5,5,4,2,3,1};
    int ans;
    for(int i =0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        if(array[i]>0){
            cout<<array[i];
            break;
        }
    }
    
    return 0;
}