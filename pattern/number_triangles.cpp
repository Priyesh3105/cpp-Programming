#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number of rows"<< endl;
    cin >> n;

    //first number triangle
    cout<< "a stared triangle"<<endl;
    for(int i=1; i<=n; i++){
             for(int j=1; j<=i; j++){
                    cout<< j;
                    cout<<" ";
                 }
             cout<<endl;
        }
    cout<< endl;

    //second number triangle
    cout<< "90'  rotation of above triangle"<< endl;
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<n-j+1;
                cout<<" ";
            }
        }
        cout<< endl;
    }
        
    cout << endl;

    //third number triangle
    cout << "180'  rotation of triangle"<< endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i-1){
                cout<<"  ";
            }
            else{
                cout<<n-j+1 ;
                cout<<" ";
            }
        }
        cout<< endl;
    }
    
    cout << endl;

    //fourth number triangle
    cout << "270' rotation of triangle"<< endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
             cout<< j ;
             cout<<" ";
         }
         cout<<endl;
    }  
    cout<<endl;
    // a 0-1 triangle
    cout<<"a triangle using 0-1"<<endl;
    for(int i=0 ; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<< endl;
    }
     
}