#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of array :"<<endl;
    cin>>n;

    cout<<"enter the array data :"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"here is the sum of all subarrays: "<<endl;

    int curr=0;
    for(int i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr+=arr[j];
            cout<<curr<<endl;
        }
    }

}