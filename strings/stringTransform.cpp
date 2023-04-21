#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    cout<<endl;

    //transform to upper case
    transform(str.begin(), str.end(), str.begin() ,::toupper);

    cout<<endl;
    cout<<"here is the string converted to uppercase by transform method"<<endl;
    cout<<str<<endl;
    cout<<endl;

     //transform to lower case
    transform(str.begin(), str.end(), str.begin() ,::tolower);

    cout<<endl;
    cout<<"here is the string converted to uppercase by transform method"<<endl;
    cout<<str<<endl;
    cout<<endl;

    return 0;
}