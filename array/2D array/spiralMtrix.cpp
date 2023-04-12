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

    cout<<endl<<endl;
    cout<<"here is the spiral order print of your matrix."<<endl;

    int row_start =0,row_end=n-1,col_start=0,col_end=m-1;

    while(row_start<=row_end && col_start<=col_end){
        for(int col = col_start;col <=col_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        for(int row=row_start;row<=row_end;row++){
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;
        for(int col=col_end;col>=col_start;col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;
        for(int row=row_end;row>=row_start;row--){
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
    }

}