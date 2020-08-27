//Write a program that calculates the average number of days a company’s employees are absent. 
//The program should have the following functions:
//• A function called by main that asks the user for the number of employees in the company. 
//This value should be returned as an int. (The function accepts no arguments.)
//• A function called by main that accepts one argument: the number of employees in the company.
//The function should ask the user to enter the number of days each employee missed during the past year. 
//The total of these days should be returned as an int.
//• A function called by main that takes two arguments: the number of employees in the company and
//the total number of days absent for all employees during the year. The function should return, as a double,
//the average number of days absent. (This function does not perform screen output and does not ask the user for input.)
//Input Validation: Do not accept a number less than 1 for the number of employees. Do not accept a negative number for the days any employee missed.


#include <iostream> 
#include <iomanip>
using namespace std ; 


int numberOfEmployers () ; 
int checking ( int) ; 
int missdays (int) ; 
double average ( int , int ) ; 


int main () { 

int number , miss; 
double average1 ;
    number = numberOfEmployers (); 
    miss = missdays (number)  ;
average1 = average ( number , miss) ; 


cout << "Numbers of employers: " << number << endl ; 
cout << "Numbers of abscents: " << miss << endl ;
cout << "Average:" << average1 << endl ; 

return 0 ; 


} 
int checking ( int input) { 

while ( !(cin >> input) || input < 0 ) { 
 cout << "No negavtive numbers" << endl   ;    
cin.clear () ; 
cin.ignore ( numeric_limits <streamsize>:: max(), '\n') ; 


}
return input ;     
    
}
 

int numberOfEmployers ( )  { 
    int number ; 
    cout << "Enter the number of employers in the company: " << endl ; 
    return checking ( number ) ; 
    

}
int missdays ( int number1) { 
int total = 0  , miss ;
int a = number1 ; 
;
for ( int i = 1 ; i <= a ; i++) {
     
cout << "Enter the total days miss for employer " << i << ":" << endl ; 
checking (miss) ; 
 

total= total + miss ; 



}
return total ; 


}

double average ( int number , int missD) { 

double av =  static_cast <double> (missD)/ number ; 

return av ; 


} 