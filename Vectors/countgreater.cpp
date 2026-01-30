#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v={3,4,5,3,455,4,443,3,4,45,54,3,443,3};
    int x=5;
    int countGreater=0;
    for(int i=0; i<v.size();i++){
        if(v[i]>x){
            countGreater++;
        }
    }
    cout<<countGreater<<endl;
    return 0;
}