//The date June 10, 1960 is special because when we write it in the following format,
//the month times the day equals the year.
//6/10/60
//Write a program that asks the user to enter a month (in numeric form), a day, and a two-digit year.
//The program should then determine whether the month times the day is equal to the year. 
//If so, it should display a message saying the date is magic. Otherwise it should display a message saying the date is not magic.
#include <iostream> 
#include <iomanip> 
using namespace std ; 


int main () { 

int mm, dd , yy ; 

cout << "Everything is going to be numerical" << endl; 
cout << "PRESS ENTER TO START" << endl ; 
cin.get(); 

cout << "Enter a month" << endl ; 
cin >> mm ; 
cout << "Enter a day" << endl ; 
cin >> dd ; 
cout << "Enter a year" << endl ; 
cin >> yy ; 

int magic = dd * mm ;


if ( yy ) 
{
 magic = yy   ;
    cout << "The date is magical" << endl ; 
}
else 
cout << "Not magical" << endl ;


}


