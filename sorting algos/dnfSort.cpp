#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j]= temp;
}

void dnfSort(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr, mid, low);
            low++;mid++;
        }
        else if( arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr, mid, high);
            high--;
        }
    }
}

int main(){
    int arr[] = {0,2,2,1,2,0,1,1,0,2,1,1,0};
    dnfSort(arr, 13);
    for (int i = 0; i < 13; i++)
    {
        cout<<arr[i]<<" ";
    } 
}