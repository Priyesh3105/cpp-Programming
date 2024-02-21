#include<iostream>
using namespace std;

//hybrid inheritance
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

class C{
    public:
            void funcC(){
                cout<<"Inherited class C"<<endl;
            }
};

class D : public B, public C{

};
int main(){
    D d;
    d.funcA();
    d.funcB();
    d.funcC();
}