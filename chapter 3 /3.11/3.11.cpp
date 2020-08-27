#include <iostream> 
#include <iomanip> 
using namespace std ; 


//Write a program that asks the user to enter the monthly costs 
//for the following expenses 
//incurred from operating his or her automobile: loan payment,
 //insurance, gas, oil, tires, and maintenance. 
// The program should then display the total monthly cost of these expenses,
// and the total annual cost of these expenses.


int main () { 
const int year = 12 ;
double loanPayment, insurance, gas , oil , tires , maintenance ; 

cout << " How much a month you spend on loan payment? " << endl ; 
cin >> loanPayment ; 
cout << " How much a month you spend on insuarance?  " << endl ; 
cin >> insurance;
cout << " How much a month you spend on gas?  " << endl ; 
cin >> gas;
cout << " How much a month you spend on oil? " << endl ; 
cin >>oil ;
 cout << " How much a month you spend on tires? " << endl ; 
cin >> tires ; 
cout << " How much a month you spend on maintenance?  " << endl ; 
cin >> maintenance ; 


double total =  loanPayment + insurance + gas + oil + tires + maintenance  , 
annualTotal = total * year ;
 
 cout << setprecision (2 ) << fixed ; 
 cout << "You will be spending  " << total << "a month " << endl ; 
 cout << "You will be spending " << annualTotal << "a year " << endl ; 


}