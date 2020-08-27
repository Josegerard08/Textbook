//Many financial experts advise that property owners should insure their homes 
//or buildings for at least 80 percent of the amount it would cost to replace 
//the structure. Write a program that asks the user to enter the replacement cost of a building 
// and then displays the minimum amount of insurance he or she should buy for the property.
#include <iostream> 
using namespace std ; 
#include <iomanip> 



int main () { 

double costHome; 


cout << "How much does the building/home cost to replace?" << endl;  
cin >> costHome;

double insurance = .80 , 
homeIn = costHome * insurance ; 

cout << setprecision (2) << fixed ; 
cout << "Mnimum amount of insurance you should buy is " << homeIn << endl ; 





}