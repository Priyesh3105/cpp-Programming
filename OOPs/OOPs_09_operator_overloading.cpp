#include<iostream>
using namespace std;

//operator overloading

class complex{
    private:
        int real, imag;

    public:
        complex(){
            //default constructor
        }

        complex(int r, int i){
            real = r;
            imag = i;
        }

        complex operator + (complex const &obj){
            complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }

        void display(){
            cout<<real<<" + i("<<imag<<")"<<endl;
        }
};


int main(){
    complex c1(4, 7);
    complex c2(3, 6);
    complex c3 = c1 + c2;
    c3.display();
    return 0;   
}