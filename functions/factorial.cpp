#include<iostream>
using namespace std;

int fact(int num){
    int factorial=1;
    for(int i=2; i<=num; i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n;
    int r;
    cout<< "enter the value of n"<<endl;
    cin>> n;
    cout<<"enter the value of r"<<endl;
    cin>>r;

    int ans= fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;
}