#include<iostream>
using namespace std;
 
 int main(){
    int n;
    cin>> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j ){
                cout<< i;
            }
            else if(j<=i-1){
                cout<<" ";
            }
            else{
                continue;
            }
        }
        int space = 2*n -2*i -1;;
        for(int j=1; j<=space;j++){
            cout<<" ";
        }
        if(i<n){
            cout<<i;
        }
        cout<< endl;
    }
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=n; j++){
           if(i==j ){
                cout<< i;
            }
            else if(j<=i-1){
                cout<<" ";
            }
            else{
                continue;
            }
        }
        int space = 2*n -2*i -1;;
        for(int j=1; j<=space;j++){
            cout<<" ";
        }
        if(i<n){
            cout<<i;
        }
        cout<< endl;
    }
 }

