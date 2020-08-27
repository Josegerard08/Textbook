//A software company sells a package that retails for $99. 
//Quantity discounts are given according to the following table.
//Quantity Discount
//10–19 20% 20–49 30% 50–99 40% 100 or more 50%
//Write a program that asks for the number of units sold and computes 
//the total cost of the purchase.
//Input Validation: Make sure the number of units is greater than 0.


#include <iostream> 
using namespace std ; 



int main () { 

const int package = 99 ;


int userInput; 
double discount , total2, total3 , total4, total5 ; 

cout << " How many computers are you buying? " << endl ; 
cin >> userInput ; 

int total = package * userInput ;  

cout << "total: " << total << endl ; 


if ( userInput >=   10 && userInput <= 19 ) { 

    cout << " Your are qualify for 20% discount " << endl ; 
    discount = .20 ;
    total2 = discount * total ; 
    cout << " Your total is now " << total2 << endl ;


}
else if ( userInput >= 20  && userInput <= 49 ) { 

    cout << " Your are qualify for 30% discount " << endl ; 
    discount = .30 ;
    total3 = discount * total ; 
    cout << " Your total is now " << total3 << endl ;


}
else if ( userInput >= 50  && userInput <= 99 ) 
{ 

    cout << " Your are qualify for 40% discount " << endl ; 
    discount = .40 ;
    total4 = discount * total ; 
    cout << " Your total is now " << total4 << endl ;


}
else if ( userInput > 100 ) 
{ 

    cout << " Your are qualify for 50% discount " << endl ; 
    discount = .50 ;
    total5 = discount * total ; 
    cout << " Your total is now " << total5<< endl ;


}
else 
cout << "No computer sold. " << endl ;









}