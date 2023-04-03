#include<iostream>
using namespace std;

int main(){
    // creating row and collumn
    int row, coll;
    cout << "enter the number of row and collumn"<< endl;
    cin >> row >> coll;

    //printing the rectangle using for loop
    for(int i=1;i<=row;i++){
            for(int j=1;j<=coll;j++){
                cout <<"* ";
            }
            cout<< endl;4
    }
}