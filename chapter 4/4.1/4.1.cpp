//Write a program that asks the user to enter two numbers. 
//The program should use the conditional operator to determine which number 
//is the smaller and which is the larger.
#include <iostream> 
#include <iomanip> 
using namespace std ; 



int main () {
int number; 
int number2; 


cout << "This program would tell you which number is bigger PRESS ENTER" << endl ; 
cin.get();

cout << "Enter first number:" << endl ; 
cin >> number ;
 
 cout << "Enter second number" << endl ; 
cin >> number2 ; 

if ( number > number2)
cout << "Your first number is bigger" << endl ; 
else 
cout << "Your second number is bigger" << endl ;

}