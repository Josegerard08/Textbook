//The formula for converting a temperature from Fahrenheit to Celsius is
//C = 5/9 (F * 32) 
//where F is the Fahrenheit temperature and C is the Celsius temperature. 
//Write a function named celsius that accepts a Fahrenheit temperature as an argument. 
//The function should return the temperature, converted to Celsius. Demonstrate the function by 
//calling it in a loop that displays a table of the Fahrenheit temperatures 0 through 20 and their Celsius equivalents.

#include <iostream> 
using namespace std ; 

double celsius ( int ); 
const double fraction = 5/9 , thirtytwo = 32 ;

int main () { 
  double total ; 

for (  int i = 1 ;  i <=20 ; i++ ) { 
  

total = celsius(i) ;  
cout << "Fahrenheit: "<<  i << " Celcius: " << total << endl ;
}


return 0 ;
}

double celsius ( int given ) { 
double total2 ; 
total2 = (5.0/9.0) * ( given - 32.0) ; 
return total2 ; 



}