#include<iostream>
#include<string>
using namespace std;

int main(){

    //first operation
    string str;
    cout<<"enter something"<<endl;
    cin>>str;
    cout<<"here is what you entered : "<<str<<endl;

    //second operation
    string str2(10, 't');
    cout<<"here is the second operation :"<<endl;
    cout<<str2<<endl;

    //third operation
    string str3;
    getline(cin, str3);
    cout<<"here is the third operation :"<<endl;
    cout<<str3<<endl;


    return 0;
}