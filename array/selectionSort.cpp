#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"enter the length of array"<<endl;
    cin>>n;
    cout<<endl;

    //array declearation
    int arr[n];
    //entering the array data
    cout<<"enter the array data"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //selection sort
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n;j++){
            if(arr[j]<arr[i]){
                int temp= arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    //print the sorted array
    cout<<endl;
    cout<<"here is the sorted array using selection sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}