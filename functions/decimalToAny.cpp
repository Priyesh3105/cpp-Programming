#include<iostream>
using namespace std;


int decimalToBinary(int n){
    int ans=0;
    int x=1;

    while(n>0){
        int y = n%2;
        ans+= x*y;
        x*=10;
        n/=2;
    }

    return ans;
}

int decimalToOctal(int n){
    int decimal = n;
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

string decimalToHexaDecimal(int n){
    int decimal = n;
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


int main(){
    int n;
    cout<<"enter the decimal number you want to convert."<<endl;
    cin>>n;


    cout<<"this is decimal to binary.";
    cout<<decimalToBinary(n)<<endl;
    cout<<"this is decimal to octal.";
    cout<<decimalToOctal(n)<<endl;
    cout<<"this is decimal to hexadecimal.";
    cout<<decimalToHexaDecimal(n)<<endl;

}