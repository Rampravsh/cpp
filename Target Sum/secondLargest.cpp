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

int findSecondLarge(int array[],int size){
    int max=array[0];
    int sec_max=INT32_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]>sec_max && array[i]<max){
            sec_max=array[i];
        }
    }
    return sec_max;

}

int main() {

    int array[]={2,34,4,4,5,7,57,4,33};
    // int indOfLar=largestElementIndex(array,9);

    // array[indOfLar]=0;
    // int indOfSecLar=largestElementIndex(array,9);

    // cout<<array[indOfSecLar]<<endl;

    cout<<findSecondLarge(array,9)<<endl;
    
    return 0;
}