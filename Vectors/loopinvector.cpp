#include <iostream>
#include<vector>
using namespace std;


int main() {
    vector<int>v={12,34,5,55,3};
    // for loop 
    // for(int i=0;i<5;i++){
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2,6);
    // for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    v.erase(v.end()-2);

    // while loop on vector for pritntig the vector
    int idx=0;
    while (idx<v.size())
    {
        cout<<v[idx++]<<" ";
    }
    cout<<endl;
    
    return 0;
}