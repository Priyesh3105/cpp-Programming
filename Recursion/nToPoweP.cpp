#include<iostream>
using namespace std;

int power(int n, int p){

    if(p==0){
        return 1;
    }
    int prevPower = power(n , p-1);
    return n * prevPower;
}

int main(){

    int n, p;
    cout<<"Eter n and p"<<endl;

    cin>>n>>p;
    cout<<"n to power p is: "<<power(n, p);
}