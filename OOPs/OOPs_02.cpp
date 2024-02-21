#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    //default constructor
    student(){
        cout<<"default constructor"<<endl;
    }

    //parameterized constructor
    student(string sname, int sage, bool sgen){
        cout<<"parameterized constructor"<<endl;
        name = sname;
        age = sage;
        gender = sgen;
    }
    //copy constructor
    student(student &a){
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    //destructor
    ~student(){
        cout<<"destructor called"<<endl;
    }

    bool operator == (student(&a)){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    student a("Urvi",100,1);
    student b;
    student c = a;

    if(c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }

    return 0;
}