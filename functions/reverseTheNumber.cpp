#include<iostream>
using namespace std;

int reverse(int num){
    int revNum=0;
    while(num>0){
        int lastDigit = num%10;
        revNum = (revNum*10)+lastDigit;
        num/=10;
    }
    return revNum;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>> n;

    cout<<"the reverse of the number is "<<reverse(n);
    return 0;
}