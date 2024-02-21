#include"bits/stdc++.h"
using namespace std;

vector<vector<int>> ans;
vector<vector<int>> ans2;

void permute(vector<int> &a, int idx){
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }
    for(int i = idx; i<a.size(); i++){
        swap(a[i], a[idx]);
        permute(a, idx+1);
        swap(a[i], a[idx]);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
    }
    permute(a,0);
    cout<<endl;
    cout<<"Permutation by function: "<<endl;
    for(auto v : ans){
        for(auto i : v){
            cout<<i;
        }
        cout<<endl;
    }

    sort(a.begin(), a.end());
    do
    {
        ans2.push_back(a);
    } while (next_permutation(a.begin(), a.end()));

    cout<<endl;
    cout<<"Permutation by shortcut: "<<endl;
    for(auto v : ans2){
        for(auto i : v){
            cout<<i;
        }
        cout<<endl;
    }
}