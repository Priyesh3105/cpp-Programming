#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(51);
    v.push_back(42);
    v.push_back(92);
    v.push_back(43);
    v.push_back(73);
    v.push_back(86);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}