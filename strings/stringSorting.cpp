#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin, s);

    sort(s.begin(), s.end());

    cout<<"here is the sorted string"<<endl;
    cout<<s<<endl;
    

}
