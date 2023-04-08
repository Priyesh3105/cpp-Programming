#include<iostream>
using namespace std;

void swapByTemp(int& a,int& b){
    int temp =a;
    a=b;
    b=temp;

}

void swapByAirthmaticOp(int& a,int& b){
    a=a+b;
    b=a-b;
    a=a-b;

}

void swapByBitwiseOp(int& a,int& b){
    a=a^b;
    b=a^b;
    a=a^b;

}

int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl<<endl;

    swapByTemp(a, b);
    cout << "After swapByTemp, a = " << a << ", b = " << b << endl;

    swapByAirthmaticOp(a, b);
    cout << "After swapByAirthmaticOp, a = " << a << ", b = " << b << endl;

    swapByBitwiseOp(a, b);
    cout << "After swapByBitwiseOp, a = " << a << ", b = " << b << endl;

    return 0;

}