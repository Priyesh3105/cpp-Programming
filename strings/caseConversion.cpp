#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cout<<"enter the string"<<endl;
    getline(cin, str);


    //convert it into uppercase

    for(int i=0;i<str.size(); i++){
        if(str[i]>='a'  && str[i]<='z'){
            str[i] -=32;
        }
    }

    cout<<endl<<endl<<endl;
    cout<<"here is the string converted to uppercase"<<endl;
    cout<<str<<endl;
    cout<<endl<<endl<<endl;

    //convert to lover case
     for(int i=0;i<str.size(); i++){
        if(str[i]>='A'  && str[i]<='Z'){
            str[i] +=32;
        }
    }

    cout<<endl<<endl<<endl;
    cout<<"here is the string converted to lowercase"<<endl;
    cout<<str<<endl;

    return 0;
}