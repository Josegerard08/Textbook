#include <iostream> 
#include <iomanip> 
using namespace std ; 
//A county collects property taxes on the assessment value of property, 
//which is 60 percent of the property’s actual value. 
//If an acre of land is valued at $10,000, 
//its assessment value is $6,000. The property tax is then 75¢ 
//for each $100 of the assessment value. The tax for the acre assessed
//at $6,000 will be $45.
// Write a program that asks for the actual value of 
// a piece of property and displays the assessment value and property tax.

int main () { 

const double percent = .60, tax = .75 , each = 100 ;

double acutualValue;  


cout << " Enter acutal value: " << endl ; 
cin >> acutualValue ; 

double  assementValue = percent * acutualValue , propertyTax = (assementValue/each) * tax ;  


cout << setprecision(2 ) << fixed ; 
cout << "Assement Value: " << setw (8)<< assementValue << endl ; 
cout << "Property Tax: " << setw(8) << propertyTax << endl ;



}