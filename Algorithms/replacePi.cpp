#include<iostream>
using namespace std;

void replacePi(string S){
    if(S.length() == 0){
        return;
    }

    if(S[0] == 'p' && S[1] == 'i'){
        cout<<"3.14";
        replacePi(S.substr(2));
    }
    else{
        cout<<S[0];
        replacePi(S.substr(1));
    }
}

int main(){
    replacePi("pipppippiissspicsppids");
}