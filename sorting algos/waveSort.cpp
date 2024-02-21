#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j]= temp;
}

void waveSort(int arr[], int n){
    for(int i=1; i<n; i+=2){
        if(arr[i] > arr[i-1]){
            swap(arr,i, i-1);
        }
        if(arr[i] > arr[i+1] && i<=n-2){
            swap(arr,i, i+1);
        }
    }
}

int main(){
    int arr[] = {0,2,2,1,2,0,1,1,0,2,1,1,0};
    waveSort(arr, 13);
    for (int i = 0; i < 13; i++)
    {
        cout<<arr[i]<<" ";
    } 
}