

//Write a program that can be used as a math tutor for a young student.
 //The program should display two random numbers that are to be added, such as:
//247 􏰃 129
//The program should wait for the student to enter the answer.
// If the answer is correct, a message of congratulations should be printed. 
// If the answer is incorrect, a message should be printed showing the correct answer.
#include <iostream> 
#include <cstdlib> 
#include <ctime> 


using namespace std ; 


int main ( ) { 

const int minValue = 1, 
 maxValue = 100 ;


unsigned seed = time (0); 
srand( seed ) ;  

int userInPut, 
answer , 

 number1 = (rand() % (maxValue - minValue + 1)) + minValue ,
 number2= (rand() % (maxValue - minValue + 1)) + minValue ; 



answer = number1 + number2 ;

cout << number1 << endl ; 
cout <<"+"<< endl ;
cout << number2 << endl ;

 

cout << "Enter your answer" << endl ;
cin >> userInPut ;

if ( userInPut == answer ) 
cout << "Congratulations!" << endl ;
else 
cout << "Wrong answer. The answer is: " << answer << endl ;



return 0 ; 



















}