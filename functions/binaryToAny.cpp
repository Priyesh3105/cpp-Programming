#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int ans=0;
    int x=1;

    while(n>0){
        int y = n%10;
        ans+= x*y;
        x*=2;
        n/=10;
    }

    return ans;
}

int binaryToOctal(int n){
    int decimal = binaryToDecimal(n);
    int ans=0;
    int x=1;

    while(decimal>0){
        int y = decimal%8;
        ans+= x*y;
        x*=10;
        decimal/=8;
    }

    return ans;
}

string binaryToHexaDecimal(int n){
    int decimal = binaryToDecimal(n);
     int x=1;
    string ans="";
   
    while (x<=decimal)
    {
        x*=16;
    }
        x /=16;   

    while(x>0){
        int lastDigit = decimal/x;
        decimal-=lastDigit*x;
        x/=16;

        if(lastDigit<=9){
            ans = ans + to_string(lastDigit);
        }
        else{
            char c= 'A'+lastDigit-10;
            ans.push_back(c);
        }
    }

    return ans;
}

int32_t main(){
    int n;
    cin >>n;

    cout<<"this is binary to decimal.";
    cout<<binaryToDecimal(n)<<endl;
    cout<<"this is binary to octal.";
    cout<<binaryToOctal(n)<<endl;
    cout<<"this is binary to hexadecimal.";
    cout<<binaryToHexaDecimal(n)<<endl;
}