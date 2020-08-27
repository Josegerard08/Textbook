//1. Markup
//Write a program that asks the user to enter an item’s wholesale cost and its markup percentage. 
//It should then display the item’s retail price. For example:
//• If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the item’s retail price is 10.00.
//• If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s
//retail price is 7.50.
//The program should have a function named calculateRetail that receives the wholesale cost and the markup percentage as 
//arguments and returns the retail price of the item.
//Input Validation: Do not accept negative values for either the wholesale cost of the item or the markup percentage.


#include <iostream> 
using namespace std ; 

double calculateRetail (double, double  ) ; 


int main ( ) { 


double cost , percentage, total  ; 

cout <<  "Enter the item wholsale cost  " << endl ; 
cin >> cost ; 
cout << "Enter the its marckup percentage" << endl ; 
cin >> percentage ; 


while  ( cost < 0 || percentage < 0 )
{ 
    cout << "No negative numbers! " << endl  ; 
    cout <<  "Enter the item wholsale cost  " << endl ; 
    cin >> cost ; 
    cout << "Enter the its marckup percentage" << endl ; 
    cin >> percentage ; 
}
 total =  calculateRetail ( cost , percentage) ; 

cout << "Total cost is: " << total  << endl ; 
 



}


double calculateRetail (double a, double b   ) { 

    return (a * b) + a ; 

}