//Write a program that will convert U.S. dollar amounts to 
//Japanese yen and to euros, storing the conversion factors in the 
//constants YEN_PER_DOLLAR and EUROS_PER_ DOLLAR. 
//To get the most up-to-date exchange rates, search the Internet using the term “currency exchange rate”. 
//If you cannot find the most recent exchange rates, use the following:
//1 Dollar = 98.93 Yen 1 Dollar = 0.74 Euros
//Format your currency amounts in fixed-point notation, with two decimal places of precision, 
//and be sure the decimal point is always displayed.



#include <iostream> 
#include <iomanip> 
using namespace std ; 


int main () { 


double dollars; 


 double YEN_PER_DOLLAR = 98.93  , EUROS_PER_DOLLAR = .074 ;



cout << "How many dollar do you have? " << endl ; 
cin >> dollars ; 

double yen = YEN_PER_DOLLAR *  dollars ,
 euros = EUROS_PER_DOLLAR * dollars ; 



cout << setprecision( 2) << fixed ; 
cout << "You have " << yen << " Yen. " << endl ; 
cout << "You have " << euros  << " Euros. " << endl; 

}