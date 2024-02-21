#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cout<<"Size: ";cin>>n;
    int target;cout<<"Target: ";cin>>target;
    vector<int> a(n);
    cout<<"array ele: ";
    for(auto &i:a)
        cin >> i;
    int i=0, ans=0, zerocnt=0;
    for(int j=0; j<n; j++){
        if(a[j] == 0)
            zerocnt++;
        while (zerocnt > target)
        {
            if(a[i] == 0)
                zerocnt--;
            i++;
        }
        ans = max(ans, j-i+1);        
    }
    cout<<"ans: "<< ans<<endl;
}