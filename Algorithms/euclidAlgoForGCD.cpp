#include<iostream>
using namespace std;

int gcd(int a, int b){
    while (b != 0)
    {
        int rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main(){
    int ans = gcd(24,36);
    cout<<"Answer: "<<ans<<endl;
}