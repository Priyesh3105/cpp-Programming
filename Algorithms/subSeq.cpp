#include<iostream>
using namespace std;

void subseq(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros = s.substr(1);

    subseq(ros,ans);
    subseq(ros, ans+ch);
}
void subseq2(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code = ch;
    string ros = s.substr(1);

    subseq(ros,ans);
    subseq(ros, ans+ch);
    subseq(ros, ans+to_string(code));
}


int main(){
    cout<<"Subsequence of string :";
    subseq("abc", "");

    cout<<"Subsequence2 of string :";
    subseq2("ab", "");
}