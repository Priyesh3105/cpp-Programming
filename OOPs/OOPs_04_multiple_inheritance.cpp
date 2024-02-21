#include<iostream>
using namespace std;

//multiple inheritance
class A{
    public:
        void funcA(){
            cout<<"Inherited class A"<<endl;
        }
};

class B{
    public:
            void funcB(){
                cout<<"Inherited class B"<<endl;
            }
};

class C : public A, public B{

};
int main(){
    C c;
    c.funcA();
    c.funcB();
}