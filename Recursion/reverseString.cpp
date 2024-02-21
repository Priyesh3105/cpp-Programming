#include<iostream>
using namespace std;

string revS;

void reverseString(string S){
    if(S.length() == 0){
        return;
    }

    string res = S.substr(1);
    reverseString(res);
    revS = revS.append(S[0]);
    cout<<S[0];
}

int main(){
    reverseString("Hello");
    cout<<revS<<endl;
}