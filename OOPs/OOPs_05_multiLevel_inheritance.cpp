#include<iostream>
using namespace std;

//multi level inheritance
class A{
    public:
        void funcA(){
            cout<<"Inherited class A"<<endl;
        }
};

class B : public A{
    public:
            void funcB(){
                cout<<"Inherited class B"<<endl;
            }
};

class C : public B{

};
int main(){
    C c;
    c.funcA();
    c.funcB();
}