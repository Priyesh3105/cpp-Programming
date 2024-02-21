#include<iostream>
using namespace std;

class student{
    int id;

    public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<"Name: "<<name<<" ";
        cout<<"Age: "<<age<<" ";
        cout<<"Gender: "<<gender<<endl;
    }

    void setId(int s_id){
        id= s_id;
    }
    void printId(){
        cout<<"Id: "<<id<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter the number of student: ";
    cin>>n;
    student arr[n];
    for(int i=0; i<n; i++){
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;
    }

    for(int i=0; i<n; i++){
        arr[i].printInfo();
    }

    for(int i=0; i<n; i++){
        arr[i].setId((i^13)+2324-(i*34)/5);
    }

    for(int i=0; i<n; i++){
        cout<<"Name: "<<arr[i].name<<" ";
        arr[i].printId();
    }
}