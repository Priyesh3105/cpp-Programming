#include <iostream>
using namespace std;

void increment(int* ptr) {
    (*ptr)++;
}

int main() {
    int num = 10;
    cout << "Before increment: num = " << num << endl;
    
    // Passing pointer to increment function
    increment(&num);
    
    cout << "After increment: num = " << num << endl;
    
    return 0;
}