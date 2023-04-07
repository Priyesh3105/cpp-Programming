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

    //bubble sort
    int counter=1;
    while (counter <n)
    {
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp =arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    

    //print the sorted array
    cout<<endl;
    cout<<"here is the sorted array using bubble sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}