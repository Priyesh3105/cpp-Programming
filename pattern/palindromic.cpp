#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;


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
        for(int j=1; j<=i; j++){
           if(j==1){
            continue;
           }
           else{
                cout<<j;
                cout<<" ";
           }
            
        }
        cout<< endl;
    }
        
}  