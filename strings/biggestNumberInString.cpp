#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    cout<<endl;

    //sort the neumeric string
    sort(str.begin(), str.end(), greater<int>());

    cout<<endl;
    cout<<"here is the neumeric string sorted by sort method"<<endl;
    cout<<str<<endl;
    cout<<endl;

    return 0;
}