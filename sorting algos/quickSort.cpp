#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int pariotion(int arr[], int l, int r){
    int pivot = arr[r];
    int i =l-1;

    for(int j=l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return i+1;
}

void quickSort(int arr[], int l, int r){
    if(l<r){
        int pi = pariotion(arr, l, r);

        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);
    }
}

int main(){
    int arr[] = {32, 43, 45, 56, 23, 23 ,53, 84,43, 23, 48, 65};
    quickSort(arr, 0, 11);
    for (int i = 0; i < 12; i++)
    {
        cout<<arr[i]<<" ";
    }
}