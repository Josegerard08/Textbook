#include <iostream> 
#include <iomanip> 
using namespace std ;


// Write a program that asks for five test scores. 
// The program should calculate the aver- age test score and display it. 
// The number displayed should be formatted in fixed-point notation,
//  with one decimal point of precision.


int main ( ) { 

double  test1, test2 , test3, test4 , test5;  

cout << " Enter the grade of test 1: " << endl ; 
cin >> test1 ; 
cout << " Enter the grade of test 2: " << endl ; 
cin >> test2 ; 

cout << " Enter the grade of test 3: " << endl ; 
cin >> test3 ; 
cout << " Enter the grade of test 4: " << endl ; 
cin >>test4 ;

cout << " Enter the grade of test 5: " << endl ; 
cin >> test5 ; 

double total =  test1 + test2 + test3 + test4  + test5, numberOfTest = 5.0,
average = total / numberOfTest ; 




cout << setprecision ( 1) << fixed ; 
cout << " The average test score is: " << average <<  endl ; 

}
