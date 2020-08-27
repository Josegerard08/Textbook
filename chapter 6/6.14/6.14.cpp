//The Middletown Wholesale Copper Wire Company sells spools of copper wiring for $100 each. 
//Write a program that displays the status of an order. The program should have a function that asks for the following data:
//• The number of spools ordered.
//• The number of spools in stock.
//• Whether there are special shipping and handling charges.
//(Shipping and handling is normally $10 per spool.) If there are special charges, 
//the program should ask for the special charges per spool.
//The gathered data should be passed as arguments to another function that displays
//• The number of spools ready to ship from current stock.
//• The number of spools on backorder (if the number ordered is greater than what is
//in stock).
//• Subtotal of the portion ready to ship (the number of spools ready to ship times
//$100).
//• Total shipping and handling charges on the portion ready to ship.
//• Total of the order ready to ship.
//The shipping and handling parameter in the second function should have the default argument 10.00.
//Input Validation: Do not accept numbers less than 1 for spools ordered.
//Do not accept a number less than 0 for spools in stock or shipping and handling charges.

#include <iostream> 
#include <string> 
using namespace std ; 

string checkingS (string) ;
int spoolOrder () ; 
int spoolInStock () ; 
double specialCharges () ; 
void display (int  , int , int ) ; 
int checking (int, int) ; 

int main( ) { 

int spoolOrdersM , spoolInStockM; 
double shipping ; 
double display1 ; 
spoolOrdersM = spoolOrder () ; 
spoolInStockM = spoolInStock () ; 
shipping = specialCharges () ;



display ( spoolOrdersM , spoolInStockM , shipping ) ; 




} 

string checkingS ( string an) { 

while (!(cin >> an ) && an != "y" && an != "Y" && an != "n" && an != "N") { 
    cout << "enter correct letter!" << endl ; 
    cin.clear () ; 
    cin.ignore (numeric_limits<streamsize>:: max ()) ; 
    }

return an ;

}

int checking (int number, int number2 ) {

    while (!(cin >> number) || number < number2 ) { 
        cout << "No negative numbers!" << endl ; 
        cin.clear () ; 
        cin.ignore (numeric_limits <streamsize> :: max ()) ; 


    }

    return number ; 

}

int spoolOrder () { 

    int num ; 

    cout << "Enter the number of spool order:" << endl ; 
    num = checking (num, 1) ; 
    return num ; 

}

int spoolInStock () { 

int num ;
cout << "Enter the number of the current spool in stock: " << endl ; 
num = checking ( num , 0) ; 

return num ; 

}
double specialCharges ( ) { 
string num ; 
double cost ;

cout << "Are they special shipping?" << endl ;
cout << "If Yes press: Y. "<< endl ; 
cout << "If No press: N. " << endl;   
num = checkingS (num)  ;


while ( num == "y" || num == "Y"  ){ 

cout << "Enter the cost:" << endl ;
cost = checking (cost , 0 ) ; 
return cost ; 

}
while ( num == "n" || num == "N") { 
cost = 10 ; 
return cost ; 
}

}

void display ( int num1 , int num2 , int num3) { 

double subtotal = num1 * num3 ,
total = subtotal * 100 ,
stock = num2 - num1 ; 

cout << "Spool order place: " << num1 << endl ; 
cout << "Spool in stock: " << stock << endl ; 
cout << "Spool shipping cost:" << num3 << endl ; 
cout << "Total of recent order: " << total << endl ;



} 