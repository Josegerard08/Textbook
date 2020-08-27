//Suppose you want to deposit a certain amount of money into a savings account and then leave it alone to draw interest for the next 10 years.
//At the end of 10 years you would like to have $10,000 in the account. How much do you need to deposit today to
//make that happen? You can use the following formula, which is known as the present
//value formula, to find out:
//P = (f/ (1 + r)^n)
//The terms in the formula are as follows:
//• P is the present value, or the amount that you need to deposit today.
//• F is the future value that you want in the account. (In this case, F is $10,000.)
//• r is the annual interest rate.
//• n is the number of years that you plan to let the money sit in the account.
//Write a program that has a function named presentValue that performs this calculation. 
//The function should accept the future value, annual interest rate, and number of years as arguments. 
//It should return the present value, which is the amount that you need to deposit today. Demonstrate the function 
//in a program that lets the user experiment with different values for the formula’s terms.

#include <iostream> 
#include <cmath> 

using namespace std ; 

double presentValue ( double , double , double) ; 
const double f1 = 10000.00; 


int main ( ) {
    double interestRate , numberOfyears, present ; 
    string  con ; 
    cout << "Enter the interest rate: " << endl ; 
    cin >> interestRate ; 
    cout << "Enter the number of years you let the money to sit in the account:" << endl ; 
    cin >> numberOfyears; 

    present = presentValue ( f1 , interestRate , numberOfyears ) ; 

    cout << "Present value must be: " << present << endl ; 
    cout << "If wish to continue press C, if not press any key" << endl; 
    cin >> con ; 
    while  ( con == "C "|| con == "c" ) { 

    cout << "Enter the interest rate: " << endl ; 
    cin >> interestRate ; 
    cout << "Enter the number of years you let the money to sit in the account:" << endl ; 
    cin >> numberOfyears; 
break ; 

    }
 present = presentValue ( f1 , interestRate , numberOfyears ) ; 

    cout << "Present value must be: " << present << endl ; 
    cout << "If wish to continue press C, if not press any key" << endl; 
    cin >> con ; 

}

double presentValue (double F , double R, double N ) { 

    double total ; 
    double i = 1 + R ; 
    total = F/ pow (i , N) ; 

return total ;


}