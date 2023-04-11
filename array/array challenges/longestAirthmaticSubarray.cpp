#include<iostream>
using namespace std;

int main(){
     int n;
    cout<<"enter the length of array :"<<endl;
    cin>>n;

    cout<<"enter the array data :"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<endl<<endl;
    cout<<"here is the longest airthmatic subarray: "<<endl;
    int ans =2;
    for(int i=0; i<n;i++){
        int pd= a[i]-a[0];
        int j=2;
        int curr =2;
        
        
        while(j<n){
            if(pd==a[j]-a[j-1]){
                curr++;
            }
            else{
                pd= a[j]-a[j-1];
                curr=2;
            }
            ans = max(ans, curr);
            j++;
            
        }
    }
    cout<<ans<<endl;
    
}