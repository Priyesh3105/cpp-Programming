#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<< "enter the numer of rows in mattrix :"<<endl;
    cin>>n;
    cout<< "enter the numer of cols in mattrix :"<<endl;
    cin>>m;


    int arr[n][m];
    cout<<"enter the data in array"<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cin>>arr[i][j];
        }
    }

     for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}