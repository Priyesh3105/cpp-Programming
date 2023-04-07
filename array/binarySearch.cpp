#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e= mid-1;
        }
        else{
            s=mid+1;
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
    cout<<binarySearch(arr, n, key)<<endl;

    return 0;
}