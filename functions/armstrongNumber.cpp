#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int num){
    int count=0;
    while (num >0)
    {
        num/=10;
        count++;
    }
    return count;
}

bool isArmstrong(int num){
    int n = countDigit(num);
    int sum =0;
    int temp =num;
    while (temp> 0)
    {
        int digit = temp%10;
        sum += pow(digit, n);
        temp/=10;
    }
    return sum == num;
}

int main(){
    int n;
    cout<< "enter the number"<<endl;
    cin>>n;

    if(isArmstrong(n)){
        cout <<n<<" is an armstrong number";
    }
    else{
        cout<<n<< " is not an armstrong number";
    }
    return 0;
}