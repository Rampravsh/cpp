#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter day number : ";
    cin>>n;
    switch (n)
    {
    case 1:
    cout<<"monday"<<endl;
    break;

    case 2:
    cout<<"Tuesday"<<endl;
    break;

    case 3:
    cout <<"Wednesday"<<endl;
    break;

    case 4:
    cout<<"Thurs"<<endl;
    break;
    default:
        break;
    }

    return 0;
}