//Write a program that asks the user to enter a number of seconds.
//• There are 60 seconds in a minute. 
//If the number of seconds entered by the user is greater than or equal to 60,
//the program should display the number of minutes in that many seconds.
//• There are 3,600 seconds in an hour. 
//If the number of seconds entered by the user is greater than or equal to 3,600, 
//the program should display the number of hours in that many seconds.
//• There are 86,400 seconds in a day.
//If the number of seconds entered by the user is greater than or equal to 86,400,
//the program should display the number of days in that many seconds.

#include <iostream> 
#include <iomanip> 
using namespace std ; 


int main ( )  { 


int sec ;
double minsec, hourSec , daySec ;

cout << "Enter the number of second: " << endl; ; 
cin >> sec ; 




if (sec < 60  )
cout << "The amount of second you put: " << sec << endl ; 
 

else if ( sec >= 60 && sec < 3600 )
{ 
    
    int min = 60 ; 
 minsec =  static_cast <double> (sec) / min ;   
 cout << setprecision (2 ) << fixed ;  
  cout << "There is " << minsec << " min." << endl;


}
else if ( sec >= 3600 && sec < 86400) 
{ 
int hour = 3600 ; 
hourSec = static_cast <double>(sec)/ hour ; 
cout << setprecision(2) << fixed ; 
cout << "There is " << hourSec << " hours. " ; 

} 


else if ( sec >= 86400 ) 
{ 

daySec = sec / 86400.00 ; 
cout << setprecision(2) << fixed ; 
cout << "There is " << daySec << " days.  " << endl ; 

}











}
