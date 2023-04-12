#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);

    int i=0;
    int currlen =0,maxlen=0;
    
    while(arr[i] != '\0'){ // Fixed comparison with null terminator
        if(arr[i]==' '){
            if(currlen>maxlen){
                maxlen=currlen;
            }
            currlen =0;
        }
        else{
            currlen++;
        }
        i++;
    }
    
    if(currlen>maxlen){ // Added check after loop for last word
        maxlen=currlen;
    }

    cout<<maxlen;

    return 0; // Added return statement to indicate successful program termination
}