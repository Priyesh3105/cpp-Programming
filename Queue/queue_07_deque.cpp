#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(0);
    dq.push_front(-1);
    for(auto i:dq)
        cout<<"("<<i<<")->";
    cout<<"NULL"<<endl;
    dq.pop_back();
    cout<<"Back: "<<dq.back()<<endl;
    dq.pop_front();
    cout<<"Front: "<<dq.front()<<endl;
}