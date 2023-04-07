#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }

    return -1;
}

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

    int key;
    cout<<endl;
    cout<<"enter the value you want to find"<<endl;
    cin>>key;
    cout<<linearSearch(arr, n, key)<<endl;

    return 0;
}