#include <iostream> 
using namespace std ; 
#include <iomanip> 
#include <cmath> 

//Write a program that asks the user for the number of males and the number of females registered in a class.
 //The program should display the percentage of males and females in the class.
//Hint: Suppose there are 8 males and 12 females in a class. 
//There are 20 students in the class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. 
//The percentage of females can be calculated as 12 ÷ 20 = 0.6, or 60%.



int main () { 
double female , male ; 


cout << "How many female are they? " << endl ; 
cin >> female ; 

cout << "How many male are they? " << endl ; 
cin >> male ; 




double total = male + female , 
percentageM = male / total , 
percentageF = female / total ; 

 
cout << setprecision (1 ) << fixed ;

cout << "The percent of females are: " << percentageF << " The percent of male are: " << percentageM << endl ; 



}

 