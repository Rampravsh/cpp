#include <iostream>
using namespace std;
int main()
{
    int num = 50;
    cout << "num= " << num;
    cout << " num+=10: " << (num += 10) << endl;
    cout << "num= " << num;
    cout << " num-=10: " << (num -= 10) << endl;
    cout << "num= " << num;
    cout << " num/=10: " << (num /= 10) << endl;
    cout << "num= " << num;
    cout << " num*=10: " << (num *= 10) << endl;

    return 0;
}