#include <iostream>
using namespace std;

bool isPowerOf2(int n){
    return (n && !(n & (n-1)));
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<isPowerOf2(n)<<endl;
    return 0;
}