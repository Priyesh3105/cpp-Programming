#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    vector<int> dict(256, -1);

    int maxlen = 0, start = -1;
    for(int i=0; i<str.length(); i++){
        if(dict[str[i]] > start){
            start = dict[str[i]];
        }
        dict[str[i]] = i;
        maxlen = max(maxlen, i-start);
    }
    cout<<maxlen<<endl;
}