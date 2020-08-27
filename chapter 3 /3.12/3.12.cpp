#include <iostream> 
#include <iomanip> 
using namespace std ; 



//Write a program that converts Celsius temperatures to Fahrenheit temperatures.
//The formula is
//F = 9/5(C)  + 32 
//F is the Fahrenheit temperature, and C is the Celsius temperature.
int main ( ) {
 
double celsius ; 
cout << "What's the tempeture in celsius? " << endl; 
cin >> celsius ; 

// math 

double fahrenheit = ((9/5) * celsius) + 32;

cout <<" The tempeture in fahrenheit is " << fahrenheit << endl ; 





}