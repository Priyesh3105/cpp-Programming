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
    cout<<endl<<endl;
    cout<<"here is the print of your matrix."<<endl;
     for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //code for transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            int temp =arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    cout<<endl<<endl;
    cout<<"here is the transpose print of your matrix."<<endl;
    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}