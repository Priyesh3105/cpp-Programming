#include<iostream>
using namespace std;

//hierarchical inheritance
class A{
    public:
        A(){
            cout<<"From A->";
        }
        void funcA(){
            cout<<"Inherited class A"<<endl;
        }
};

class B : public A{
    public:
        B(){
            cout<<"From B->";
        }
        void funcB(){
            cout<<"Inherited class B"<<endl;
        }
};

class C : public A{
    public:
        C(){
            cout<<"From C->";
        }
        void funcC(){
            cout<<"Inherited class C"<<endl;
        }
};

class D : public B{
    public:
        D(){
            cout<<"From D:"<<endl;
        }
};

class E : public B{
    public:
        E(){
            cout<<"From E:"<<endl;
        }
};

class F : public C{
    public:
        F(){
            cout<<"From F:"<<endl;
        }
};

class G : public C{
    public:
        G(){
            cout<<"From G:"<<endl;
        }

};
int main(){
    D d;
    d.funcA();
    d.funcB();

    E e;
    e.funcA();
    e.funcB();

    F f;
    f.funcA();
    f.funcC();

    G g;
    g.funcA();
    g.funcC();
}