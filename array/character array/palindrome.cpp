#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of the character array"<<endl;
    cin>>n;

    char arr[n+1];
    cout<<"enter the array data"<<endl;
    cin>>arr;

    cout<<endl<<endl;
    cout<<"here is the array"<<endl;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<endl;
    }

    bool check=true; // Fixed the variable name from ckeck to check

    for(int i=0;i<n+1;i++){
        if(arr[i]!=arr[n-1-i]){
            check =false;
            break;
        }
    }

    if(check==true){
        cout<<"word is a palindrome";
    }
    else{
        cout<<"word is not a palindrome";
    }

    return 0; // Added return statement to indicate successful program termination
}