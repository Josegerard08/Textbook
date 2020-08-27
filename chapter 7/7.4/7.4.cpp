//In a program, write a function that accepts three arguments: an array, the size of the array, and a number n. 
//Assume that the array contains integers. The function should display all of the numbers in the array that are greater than the number n.

#include <iostream>
using namespace std; 


void num (int [], int , int ) ;

int main ( ) { 
const int size = 5 ; 
int numbers [size] = { 2, 4 , 3 , 8, 3 } ;  
int n = 3;
num (numbers , size , 3) ; 




} 
void num ( int array [] , int s , int n) {

cout << "All this number are greater than " << n << endl ;



for (int i = 1 ; i < s ; i++)
 { 
     if ( n < array[i] )
        cout << array[i] << endl ;

}


}