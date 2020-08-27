//Write a program that lets the user enter 10 values into an array. 
//The program should then display the largest and smallest values stored in the array.

#include <iostream> 
using namespace std ; 

int main ( ) {
const int size = 10 ; 
int num [ size ]; 

for ( int i = 0 ; i < size; i++) { 
cout << "enter value" << (i +1) << ":"<<  endl ; 
cin >> num [ i] ; 


}
cout << "Displaying number" << endl ;
cout << endl ;   

for ( int show : num) { 
    cout << num [ show] << endl;
}


}