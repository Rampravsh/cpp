#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>v;
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    
    v.pop_back();
    v.pop_back();
    
    cout<<"after pop_back Size:"<<v.size()<<endl;
    cout<<"after pop_back Capacity:"<<v.capacity()<<endl;

    return 0;
}