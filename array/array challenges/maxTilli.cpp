#include<iostream>
using namespace std;


int main(){
    int n;
    cout <<"enter the length of array"<<endl;
    cin>> n;
    cout<<endl;

    int arr[n];
    cout<<"enter the data in array"<<endl;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    int mx = -199999999;
    for(int i=0; i<n; i++){
        if(arr[i]>mx){
            mx=arr[i];

        }
        cout<<"max till "<< i <<" is : "<<mx<<endl;
    }
   
    cout<<"max till i is : "<<mx<<endl;
    return 0;
}