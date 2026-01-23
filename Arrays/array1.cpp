#include <iostream>
using namespace std;

int main() {
    int array[]={1,2,3,4};
    // cout<<sizeof(array)/sizeof(array[0])<<endl;
  
    // int array2[4];
    // cout<<array2[0]<<endl;
    // cout<<array2[1]<<endl;
    // cout<<array2[2]<<endl;
    // cout<<array2[3]<<endl;
    int size =sizeof(array)/sizeof(array[0]);
    // for loop
    // for(int i=0; i<size;i++){
    //     cout<<array[i]<<endl;
    // }

    //for each loop 
    // for(int element:array){
    //     cout<<element<<endl;
    // }
    // while loop
    // int index = 0;
    // while(index<size){
    //     cout<<array[index]<<endl;
    //     index++;
    // }

    char vowels[5];
    // for(int i = 0;i<5;i++){
    //     cin>>vowels[i];
    // }

    for(char &element:vowels){
        cin>>element;
    }
    for(int i=0;i<5;i++){
        cout<<vowels[i]<<" ";
    }


    return 0;
}