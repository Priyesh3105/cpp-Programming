#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    for(int i=0; i<v1.size(); i++){
        cout<<"v1["<<i<<"] :"<<v1[i]<<" ";
    }
    cout<<endl;


    //initializing by another method
    vector<int> v2(3, 60);
    for(int i=0; i<v2.size(); i++){
        cout<<"v2["<<i<<"] :"<<v2[i]<<" ";
    }
    cout<<endl;

    //use of wap funtion
    swap(v1,v2);
    for(int i=0; i<v1.size(); i++){
        cout<<"v1["<<i<<"] :"<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<v2.size(); i++){
        cout<<"v2["<<i<<"] :"<<v2[i]<<" ";
    }
    cout<<endl;


}