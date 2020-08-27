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
using namespace std ; 


int main ( ) { 

int year, month ; 

cout << " Enter the number of a month(1-12): " << endl; 
cin >> month ;


cout << "Enter the year " << endl  ; 
cin >> year ; 
switch ( month )
{
case 1: 
    cout <<"31 days" << endl;
    cout << year << endl ;  
    break ; 
case 2: 
   if ( year % 4 ) 
   cout << "29 days"<< endl  ;
   else 
   cout << "28 days "<< endl  ; 
    break ; 
 case 3: 
    cout <<"31 days" << endl;
    cout << year << endl ; 
    break ; 
 case 4: 
    cout <<"30 days" << endl;
    cout << year << endl ;  
    break ; 
case 5: 
    cout <<"31 days" << endl;
    cout << year << endl ; 
    break ;  
case 6 : 
    cout <<"30 days" << endl;
    cout << year << endl ;  
    break;
case 7 : 
    cout <<"31 days" << endl;
    cout << year << endl ;  
    break;
case 9 : 
    cout <<"30 days"  << endl;
    cout << year << endl ;  
    break;
case 10 : 
    cout <<"31 days" << endl;
    cout << year << endl ;  
    break;
case 11 : 
    cout <<"30 days" << endl;
    cout << year << endl ;  
    break;
case 12 : 
    cout <<"31 days" << endl;
    cout << year << endl ;  
    break;

default: 
cout << "Invalid output" << endl ; 
    break;
}

























}