#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num){
    if(num<2){
        return false;
    }
    for(int i=2; i<=sqrt(num); i++){
        if(num%i==0){
            return false;
            break;
        }
        else{
            return true;
        }
    }
}

int main(){
    int a;
    cout<<"enter the first number"<<endl;
    cin>> a;
    int b;
    cout<<"enter the first number"<<endl;
    cin>> b;

    cout<<"here are the prime numbers between "<<a<<" and "<<b<<endl;
    for(int i=a; i<=b; i++ ){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}