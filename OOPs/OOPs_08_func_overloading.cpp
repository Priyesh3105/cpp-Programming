#include<iostream>
using namespace std;

//function overloading

class myClass{
    public:
        void fun(){
            cout<<"function without parameter"<<endl;
        }
        void fun(int x){
            cout<<"function with integer parameter"<<endl;
        }
        void fun(double x){
            cout<<"function with double parameter"<<endl;
        }
};


int main(){
    myClass obj;
    obj.fun();
    obj.fun(2);
    obj.fun(3.14);
}