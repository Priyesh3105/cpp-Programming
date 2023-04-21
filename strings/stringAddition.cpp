#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "fam";
    string s2 = "ily";

    // Using append()
    string s3 = s1;
    s3 = s3.append(s2);
    cout << "Here is the answer using append(): " << endl;
    cout << s3 << endl;

    // Using arithmetic operator +
    string s4 = s1 + s2;
    cout << "Here is the answer using arithmetic operator +: " << endl;
    cout << s4 << endl;

    // Clear the variables using the clear() function
    cout << "Here is the value of s1 after using clear() function: " << endl;
    s1.clear();
    cout << s1 << endl;

    // Compare the strings
    if (s3.compare(s4) == 0) { // Compare returns 0 if strings are equal
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    //using the erase function 
    string newString ="playground";
    cout << "Here is the value of string newString: " << endl;
    cout << newString << endl;
    newString.erase(3,4);
    cout << "Here is the value of string newString after using erase function: " << endl;
    cout <<newString << endl;

    // using insert function
    newString.insert(3, "ygro");
    cout << "Here is the value of string newString after using insert function: " << endl;
    cout <<newString << endl;

    //using find function
    cout << "Here is the answer of find function: " << endl;
    cout<<newString.find("ground")<<endl;

    //fining the size of string
    cout << "Here is the answer of size function: " << endl;
    cout<<newString.size()<<endl;

    //printing each character of string using length function
    cout << "Here are elements of new string: " << endl;
    for(int i=0; i<newString.length(); i++){
        cout<<newString[i]<<endl;
    }

    //printing a substring
    cout<<newString.substr(4, 4)<<endl;

    // new string of number to int
    string num = "108";
    cout<<num+"3"<<endl;
    int x= stoi(num);
    cout<<x+3<<endl;


    return 0;
}