#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }
    if(arr[i] == key){
    return i;
    }  
    return firstOcc(arr, n, i+1, key);
}

int lastOcc(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }
    int restArray = lastOcc(arr, n, i+1, key);  
    if(restArray != -1){
        return restArray;
    }
    if(arr[i] == key){
    return i;
    }  
    return -1;
}

int main(){

    int arr[]= {1,45,3,6,3,2,3};
    cout<<"first occ of 3 is at: "<<firstOcc(arr, 7, 0, 2)<<endl;
    cout<<"last occ of 3 is at: "<<lastOcc(arr, 7, 0, 2)<<endl;
    return 0;
}