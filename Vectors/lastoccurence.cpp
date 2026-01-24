#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v(10);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<"enter x:";
    int x;
    cin>>x;
    int occurence=-1;

    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
    }
    
    cout<<occurence<<endl;

    return 0;
}