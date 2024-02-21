#include<iostream>
using namespace std;

string removeDup(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if(ans[0] == ch){
        return ans;
    }
    else{
        return (ch + ans);
    }
}


int main(){
    string dup = removeDup("aaassscccdddeee");
    cout<<dup<<endl;
}