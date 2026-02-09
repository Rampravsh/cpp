#include <iostream>
using namespace std;
#include<vector>
#include <algorithm>

int main() {
    // int array[]={1,2,3,4,5,6};
    // int n=6;
    // int k=2;
    // k=k%n;
    // int ansArray[n];
    // int j=0;

    // //inserting last k element in ans array

    // for(int i=n-k;i<n;i++){
    //     ansArray[j++]=array[i];
    // }

    // //inserting first n-k element in ans array

    // for(int i=0; i<n-k; i++){
    //     ansArray[j++]=array[i];
    // }

    // for(int i=0;i<n;i++){
    //     cout<<ansArray[i];
    // }
    // cout<<endl;
    
    vector<int> array={1,2,3,4,5,6};
    int n=array.size();
    int k=2;
    k=k%n;
    
    reverse(array.begin(),array.end());
    reverse(array.begin(),array.begin()+k);
    reverse(array.begin()+k,array.end());

    for(int i=0;i<n;i++){
        cout<<array[i];
    }
    return 0;
}