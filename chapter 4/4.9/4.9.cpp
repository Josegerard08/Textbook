//Create a change-counting game that gets the user to enter the number of coins required to make exactly one dollar.
//The program should ask the user to enter the number of pennies, nickels, dimes, and quarters.
//If the total value of the coins entered is equal to one dollar, the program should congratulate 
//he user for winning the game. Otherwise, the program should display a message indicating whether 
//the amount entered was more than or less than one dollar.


#include <iostream> 
#include <iomanip>
using namespace std ; 

int main () { 

const double dollar = 1.00;
int userDime , userNickel , userQuarter ; 


cout << "This program is going to add the number coins you ask to a dollar" << endl ; 
cout << "PRESS ENTER TO START" << endl ; 
cin.get() ; 

cout << "How many quarter do you wish?" << endl ; 
cin >> userQuarter; 
cout << "How many dime do you wish?" << endl ; 
cin >> userDime; 
cout << "How many nickle do you wish?" << endl ; 
cin >> userNickel; 


//math 
double 
 dime = .10 , 
nickel = .05 , 
quarter = .25 ,
totalN = userNickel * nickel ,
totalD = dime * userDime ,
totalQ = userQuarter * quarter , 

total = totalN + totalQ + totalD; 

if( total == dollar)
cout << "GOOD JOB!" << endl; 
else if ( total < dollar)
       cout << "less than a dollar" << endl ; 
else if ( total > dollar) 
       cout << "More than a dollar" << endl ;









}