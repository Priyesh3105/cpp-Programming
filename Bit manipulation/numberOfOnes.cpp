#include <iostream>
using namespace std;

int numberOfOnes(int n){
    int count = 0;
    while (n)
    {
        n = n & (n-1);
        count++;
    }
    
    return count;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<numberOfOnes(n)<<endl;
    return 0;
}