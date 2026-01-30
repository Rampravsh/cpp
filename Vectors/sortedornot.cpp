#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v={1,2,3,4,5,6,7,8,9,0};
    bool sorted=true;
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1]){
            sorted=false;
            break;
        }
    }
    cout<<sorted<<endl;
    return 0;
}