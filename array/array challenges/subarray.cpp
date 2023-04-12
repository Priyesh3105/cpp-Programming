#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;

    int arr[n];
     cout<<"enter the data in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl<<endl;
    cout<<"here are the sub arrays."<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }cout<<endl;
        }
    }
}