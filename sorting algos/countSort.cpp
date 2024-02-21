#include<iostream>
using namespace std;



void countSort(int arr[], int n){
    int k = arr[0];
    for(int i=0; i<n; i++){
        k = max(k, arr[i]);
    }

    int count[100] = {0};
    for(int i=0; i<n; i++){
        count[arr[i]]++;        
    }
    for(int i=1; i<=k; i++){
        count[i] += count[i-1];
    }
    int output[n];
    for(int i=n-1; i>=0; i--){
        output[--count[arr[i]]] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }
}

int main(){
    int arr[] = {32, 43, 45, 56, 23, 23 ,53, 84,43, 23, 48, 65};
    countSort(arr, 12);
    for (int i = 0; i < 12; i++)
    {
        cout<<arr[i]<<" ";
    }    
}