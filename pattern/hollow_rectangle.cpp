#include <iostream>
using namespace std;

int main(){
   int row, coll;
   cout << "enter row and collumn"<<endl;
   cin >> row >> coll;

   for(int i=1; i<= row; i++){
      for(int j=1; j<=coll; j++){
         if(i==1 || j==1 || i== row || j== coll){
            cout<< "* ";
         }
         else{
            cout<< "  ";
         }
      }
      cout << endl;
   }
}