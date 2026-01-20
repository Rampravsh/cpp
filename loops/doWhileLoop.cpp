#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number the loops : ";
    cin>>n;
    int sum=0;
    do{
        int num;
        cout<<"enter number: ";
        cin>>num;
        sum+=num;
        n--;
    }while(n>0);
    cout<<sum<<endl;
    return 0;
}