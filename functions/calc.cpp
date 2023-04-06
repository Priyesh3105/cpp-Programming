#include<iostream>
using namespace std;

int add(int num1, char button, int num2){
    switch (button)
    {
    case '+':
        return num1 + num2;
        break;

    case '-':
        return num1 - num2;
        break;

    case '*':
        return num1 * num2;
        break;    

    case '/':
        return num1 / num2;
        break;
    
    case '%':
        return num1 % num2;
        break;

    default:
        cout<< "enter valid operator";
        break;
    }
}


int main(){
    int a;
    char b;
    int c;
    cout<<"enter the first number"<<endl;
    cin>> a;
    cout <<"enter the airthmatic operator"<<endl;
    cin>> b;
    cout<<"enter the second number"<<endl;
    cin>> c;
    cout<< "your answer is : ";
    cout<< add(a,b,c)<<endl;
    return 0;

}