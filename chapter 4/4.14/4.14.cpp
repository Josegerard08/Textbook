//A bank charges $10 per month plus the following check fees for a commercial checking account:
//$.10 each for fewer than 20 checks 
//$.08 each for 20–39 checks
//$.06 each for 40–59 checks
//$.04 each for 60 or more checks
//The bank also charges an extra $15 if the balance of the account falls below $400 (before any check fees are applied). 
//Write a program that asks for the beginning balance and the number of checks written. Compute and display the bank’s 
//service fees for the month.
//Input Validation: Do not accept a negative value for the number of checks written. 
//If a negative value is given for the beginning balance, display an urgent message indicating the account is overdrawn.
#include <iostream> 
using namespace std ; 


int main () { 

const int fee1 = 10; 
const double 
fee2 =.10  , 
fee3 = .08, 
fee4 = .06, 
fee = .04 ; 

double currentBalance, monthBalance; 
int checksWritten ;


cout << "current balance: " << endl ; 
cin >> currentBalance ;

cout << "Number of checks written: " << endl ; 
cin >> checksWritten ; 

double subtotal = currentBalance - fee1 ; 

if ( checksWritten > 0 && checksWritten < 20 ){ 

    monthBalance = subtotal - ( fee2 * checksWritten ) ; 
    cout << "After month balance" << monthBalance <<  endl ; 


}

else if ( checksWritten >= 20  && checksWritten <= 39 ){ 

    monthBalance = subtotal - ( fee2 * checksWritten ) ; 
    cout << "After month balance" << monthBalance <<  endl ; 


}

else if ( checksWritten >= 49 && checksWritten <= 59)
{ 

    monthBalance = subtotal - ( fee3 * checksWritten ) ; 
    cout << "After month balance" << monthBalance <<  endl ; 


}

else if ( checksWritten >= 60 )
{ 

    monthBalance = subtotal - ( fee4 * checksWritten ) ; 
    cout << "After month balance" << monthBalance <<  endl ; 


} else 
cout << "Overdrawn" << endl ; 







}