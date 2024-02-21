#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){
    int n = s.size();
    stack<char> st;

    bool ans = true;
    for(int i=0; i<n; i++){
        cout<<s[i];
        if(s[i] == '[' || s[i] == '{' || s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ']'){
            if(!st.empty() and st.top() == '['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(s[i] == '}'){
            if(!st.empty() and st.top() == '{'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(s[i] == ')'){
            if(!st.empty() and st.top() == '('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }
    cout<<endl;
    if(!st.empty()){
        return false;
    }
    return ans;
}

int main(){
    string str = "[{[()]}]";

    if(isValid(str)){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
}