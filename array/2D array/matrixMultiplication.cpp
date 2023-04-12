#include<iostream>
using namespace std;

int main(){
    int n1,m1;
    cout<< "enter the numer of rows in mattrix One:"<<endl;
    cin>>n1;
    cout<< "enter the numer of cols in mattrix One:"<<endl;
    cin>>m1;


    int arrOne[n1][m1];
    cout<<"enter the data in arrayOne"<<endl;
    
    for(int i=0;i<n1;i++){
        for(int j=0; j<m1;j++){
            cin>>arrOne[i][j];
        }
    }

     for(int i=0;i<n1;i++){
        for(int j=0; j<m1;j++){
            cout<<arrOne[i][j]<<" ";
        }
        cout<<endl;
    }

    int n2,m2;
    cout<< "enter the numer of rows in mattrix Two:"<<endl;
    cin>>n2;
    cout<< "enter the numer of cols in mattrix Two:"<<endl;
    cin>>m2;


    int arrTwo[n2][m2];
    cout<<"enter the data in arrayTwo"<<endl;
    
    for(int i=0;i<n2;i++){
        for(int j=0; j<m2;j++){
            cin>>arrTwo[i][j];
        }
    }

     for(int i=0;i<n2;i++){
        for(int j=0; j<m2;j++){
            cout<<arrTwo[i][j]<<" ";
        }
        cout<<endl;
    }

    int ans[n1][m2];
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                ans[i][j]=0;
                for(int k=0;k<m1;k++){
                    ans[i][j] += arrOne[i][k] * arrTwo[k][j];
                }
            }
        }
    cout<<"Matrix Multiplication:"<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0; j<m2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}