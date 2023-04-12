#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of the character array"<<endl;
    cin>>n;

    char arr[n+1];
    cout<<"enter the array data"<<endl;
    cin>>arr;

    cout<<endl<<endl;
    cout<<"here is the array"<<endl;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<endl;
    }

}