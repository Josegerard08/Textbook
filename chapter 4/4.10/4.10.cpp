//Write a program that asks the user to enter the month 
//(letting the user enter an integer in the range of 1 through 12) 
//and the year. The program should then display the number of days in that month. 
//Use the following criteria to identify leap years:
//1. Determine whether the year is divisible by 100.
// If it is, then it is a leap year if and only if it is divisible by 400. 
 //For example, 2000 is a leap year but 2100 is not.
//2. If the year is not divisible by 100, then it is a leap year if and if only it is divisible by 4. 
//For example, 2008 is a leap year but 2009 is not.
//Here is a sample run of the program:
//Enter a month (1-12): 2 [Enter] Enter a year: 2008 [Enter]
//29 days
#include <iostream> 
#include <iomanip> 
using namespace std ; 




int main () { 



const int  number = 4 ; 
int month, year; 
double notLeapYr; 


cout << " Enter month (1-12) " << endl ; 
cin >> month ; 

cout << " Enter year " << endl ; 
cin >> year ; 

cout << month << endl ; 

if ( month >12  || month <0  )
    cout << "You enter an invalid month" << endl ; 
else if  (month == 1  )
    cout << " 31 DAYS " << endl; 
else if  (month == 3  )
    cout << " 31 DAYS " << endl; 
else if  (month == 5 )
    cout << " 31 DAYS " << endl; 
else if  (month == 7  )
    cout << " 31 DAYS " << endl;
else if  (month == 8 )
    cout << " 31 DAYS " << endl;
else if  (month == 10  )
    cout << " 31 DAYS " << endl;
else if  (month == 12  )
    cout << " 31 DAYS " << endl;

//30 days 

else if  (month == 4 )
    cout << " 30 DAYS " << endl;
else if  (month == 6 )
    cout << " 30 DAYS " << endl;
else if  (month == 9 )
    cout << " 30 DAYS " << endl;
else if  (month == 11 )
    cout << " 30 DAYS " << endl;
else if ( month == 2 ) {
      int leapYear =  year / number  ;   
      double noty = year / number ; 
     if ( leapYear   )
        cout << "29 DAYS" << endl ; 
        else if ( noty)
        cout << "28 DAYS" << endl ; 
}








}