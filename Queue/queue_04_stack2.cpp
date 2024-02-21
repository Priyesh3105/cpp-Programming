#include<iostream>
#include<stack>
using namespace std;

class que{
    stack<int> s;
    public:
        void push(int x){
            s.push(x);
        }
        int pop(){
            if(s.empty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            int x = s.top();
            s.pop();
            if(s.empty()){
                return x;
            }

            int item = pop();
            s.push(x);
            return item;

        }
        bool empty(){
            if(s.empty()){
                return true;
            }
            return false;
        }
};

int main(){
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
}