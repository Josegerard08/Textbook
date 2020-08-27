//Suppose you have a certain amount of money in a savings account that earns compound monthly interest, 
//and you want to calculate the amount that you will have after a speific number of months. The formula, 
//which is known as the future value formula, is:
//F= P x (1 + i)^t
//The terms in the formula are as follows:
//• F is the future value of the account after the specified time period.
//• P is the present value of the account.
//• i is the monthly interest rate.
//• t is the number of months.
//Write a program that prompts the user to enter the account’s present value, monthly interest rate, 
//and the number of months that the money will be left in the account. The program should pass these values 
//to a function named futureValue that returns the future value of the account, after the specified number of months.
//The program should display the account’s future value.

#include <iostream> 
#include <cmath> 
using namespace std ; 

double futureValue (double , double, double ) ;
double check (  double   ) ; 
int main () { 

double presentValue, MIR, months, total   ; 

    
    cout << "Enter present value of the account " << endl ; 
       presentValue = check (presentValue) ;
    cout << "Enter monthly interest rate: " << endl ; 
        MIR = check (MIR); 
    cout << "Enter the number of months that you'll like to keep your money in the account: " << endl ;
        months = check ( months); 

total = futureValue ( presentValue, MIR, months ) ; 


cout << "Future value: " << total << endl ; 
cout << "present value: " << presentValue  << endl ; 
cout << "Monthly Interest rate: " << MIR << endl ; 
cout << " Number of months of keeping money in the account: " << months << endl ; 
}
double futureValue (double P, double i , double t ) { 

    double total, expression =  1 + i ; 
    total = P * pow ( expression , t ) ; 
    return total ; 

}


double check ( double  checking )
{   
 while ( !(cin >> checking ) || checking < 0 )  { 
   
 cout << "No negative numbers!" << endl ; 
 cin.clear ();
 cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

} 

 return checking ; 

 } 




