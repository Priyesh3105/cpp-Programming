#include<iostream>
using namespace std;

class base
{
public:
    virtual void print(){
        cout<<"Base print"<<endl;
    }
    void display(){
        cout<<"Base display"<<endl;
    }
};

class derived : public base
{
public:
    void print(){
        cout<<"derived print"<<endl;
    }
    void display(){
        cout<<"derived display"<<endl;
    }
};


int main(){
    base* baseptr;
    derived d;
    baseptr = &d;

    baseptr->print();
    baseptr->display();
    return 0;
}