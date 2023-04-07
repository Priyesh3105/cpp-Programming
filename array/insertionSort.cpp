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

    //insertion sort
   for(int i=1;i<n;i++){
    int current = arr[i];
    int j=i-1;
    while (arr[j]>current && j>=0)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
   }

    //print the sorted array
    cout<<endl;
    cout<<"here is the sorted array using insertion sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}