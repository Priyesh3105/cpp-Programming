#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;

    int arr[n];
     cout<<"enter the data in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxSum= INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxSum = max(maxSum,sum);
        }
    }
    cout<<"here the maxximum subarray sum : "<<maxSum;

}