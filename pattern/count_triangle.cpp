#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter the number of rows"<<endl;
    cin>> n;

    int count =1;
    for(int i =1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< count;
            cout<<" ";
            count++;
        }
        cout<<endl;
    }
    cout<< endl;

    // a pyramid
    cout<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<j;
            cout<<"   ";
        }
        cout<<endl;
    }

}