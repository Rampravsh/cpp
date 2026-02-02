#include <iostream>
using namespace std;

int largestElementIndex(int array[],int size){
    int max=INT32_MIN;
    int maxindex =-1;
    for(int i =0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}

int main() {

    int array[]={2,3,4,4,5,7,57,4,33};
    int indOfLar=largestElementIndex(array,9);

    array[indOfLar]=0;
    int indOfSecLar=largestElementIndex(array,9);

    cout<<array[indOfSecLar]<<endl;
    
    return 0;
}