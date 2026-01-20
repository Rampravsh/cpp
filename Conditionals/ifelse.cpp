#include<iostream>
using namespace std;
int main(){
    // int num;
    // cin>>num;
    // if(num>33){
    //     cout << "pass"<< endl;
    // }else{
    //     cout<<"fail"<<endl;
    // }

    // if(num%2==0){
    //     cout<<"even"<<endl;
    // }else{
    //     cout<<"odd"<<endl;
    // }

    int age;
    cout<<"Enter yout age : ";
    cin>>age;
    if(age<12){
        cout<<"child";
    }else if(age<18){
        cout<<"Teenager";
    }else{
        cout<<"Adult";
    }
    return 0;
}