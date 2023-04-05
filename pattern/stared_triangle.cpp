#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number of rows"<< endl;
    cin >> n;

    //first stared triangle
    cout<< "a stared triangle"<<endl;
    for(int i=1; i<=n; i++){
             for(int j=1; j<=i; j++){
                    cout<< "* ";
                 }
             cout<<endl;
        }
    cout<< endl;

    //second stared triangle
    cout<< "90'  rotation of above triangle"<< endl;
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<< endl;
    }
        
    cout << endl;

    //third stared triangle
    cout << "180'  rotation of triangle"<< endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i-1){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<< endl;
    }
    
    cout << endl;

    //fourth stared triangle
    cout << "270' rotation of triangle"<< endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
             cout<< "* ";
         }
         cout<<endl;
    }  
     
}