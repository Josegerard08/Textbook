// Write a program that calculates the average rainfall for three months. The program should ask the user to enter the name of each month, such as June or July, and the amount of rain (in inches) that fell each month. The program should display a message similar to the following:
// The average rainfall for June, July, and August is 6.72 inches.


#include <iostream>

using namespace std ; 
#include <iomanip> 

int main () { 

// unname months
 string month1 , month2 , month3 ; 
const int months = 3 ; 

// unname amount of rain 
double in1, in2 , in3 ; 



// asking for months 

cout << "Name of month: " <<  endl ; 
getline ( cin , month1);

cout << "The number of inches rain: " << endl ; 
cin >> in1  ;


cout << "Name of month: " <<  endl ; 
cin >> month2;

cout << "The number of inches rain:  " << endl ; 
cin >> in2 ; 


cout << "Name of month: " <<  endl ; 
 cin >>  month3;

cout << "The number of inches rain: " << endl ;    
cin >> in3 ; 


//doing the math 

double total = in1 + in2 + in3 ,
average = total / months;


// display 

cout << setprecision (2) << fixed ; 
cout << "The average rainfall for " << month1 << " , " << month2 << "and " << month3 <<  " is "  << average << " inches."  << endl ; 





return 0 ; 

}

