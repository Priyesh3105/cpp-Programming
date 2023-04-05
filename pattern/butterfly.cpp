#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter the number of rows"<< endl;
    cin>>n;

    for(int i=1; i<=n ; i++){
        for(int j=1;j<=i;j++ ){
            cout<<"* ";
        }
        int space = 2*n -2*i +1;
        for(int j=1; j<space ; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<< endl;
    }
    for(int i=1; i<=n ; i++){
        for(int j=1;j<=n-i+1;j++ ){
            cout<<"* ";
        }
        int space = 2*i -1;
        for(int j=1; j<space; j++){
            cout<<"  ";
        }
        for(int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }
        cout<< endl;
    }
}