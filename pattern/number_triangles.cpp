#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number of row"<<endl;
    cin>> n;

    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
            cout<< " ";
        }
        cout<< endl;
    }
    cout<<endl;
    cout << "inverse of the above triangle"<<endl;

    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
            cout<<" ";
        }
        cout<< endl;
    }
}