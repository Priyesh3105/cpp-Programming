#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cout<<"Size: ";cin>>n;
    int target;cout<<"Target: ";cin>>target;
    vector<int> a(n);
    cout<<"array ele: ";
    for(auto &i:a)
        cin >> i;
    bool found = false;
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        int lo=i+1; int hi = n-1;
        while (lo<hi)
        {   
            int current = a[i] + a[lo] + a[hi];
            if(current == target){
                found = true;
                break;
            }
            else if(current < target){
                lo++;
            }
            else{
                hi--;
            }
        }   
        if(found){
            break;
        }       
    }  
    if(found){
        cout<<"True"<<endl;
    } 
    else{
        cout<<"False"<<endl;
    }
}