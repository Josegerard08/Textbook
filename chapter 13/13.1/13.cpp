/*Design a class called Date. The class should store a date in three integers: month, day, and year. 
There should be member functions to print the date in the following forms:
12/25/2014
 December 25, 2014 
 25 December 2014
Demonstrate the class by writing a complete program implementing it.
Input Validation: Do not accept values for the day greater than 31 or less than 1. 
Do not accept values for the month greater than 12 or less than 1. */
#include <iostream> 
using namespace std ; 

class Date
{ 
    private : 
    int month,
    day , 
    year ; 
   

    public :
        void setMonth (int) ; 
        void setDay (int); 
        void setYear (int) ;
        int getMonth ( ); 
        int getDay (); 
        int getYear (); 
        
};
void Date::setMonth ( int m ) { 
            month = m ; 
        }
        int Date:: getMonth ()
        { 
            return month; 

        }
        
        void Date:: setDay(int d) 
        { 
            day = d ; 

        }
        int Date::getDay ( ) { 
            return day ; 
        }
        void Date::setYear ( int y ) { 
            year = y  ; 

        }
        int Date::getYear ( ) { 
            return year ; 
        }


int checking ( int ) ; 
int checking2 (int ); 
 string monthName [12] = {"January","Febuary","March","April","May","June","July","August","September","October","November","December"};
int main ( ) 
{ 
    Date date1 ;
    int month ; 
    int day ; 
    int year; 
    
    cout << "Enter month: " ; 
    month = checking ( month ); 
    cout << "Enter day: ";
    day = checking2 (day) ;     
    cout << "Enter year: " ; 
    cin>> year ; 


    date1.setMonth(month); 
    date1.setDay(day);
    date1.setYear(year) ; 


    cout << monthName[date1.getMonth()]   << "/ " << date1.getDay () << " / " << date1.getYear () << endl ;  
    cout << date1.getMonth () << " / " << date1.getDay () << " / " << date1.getYear ()  << endl ; 
    cout << date1.getDay () << " / " << monthName[date1.getMonth()] <<" / " <<  date1.getYear () << endl ;

}


int checking  ( int input ) 
{ 
    while (!(cin >> input) || input  < 1 || input > 12 ){ 
    cout << "Enter a valid number: " << endl ; 
    cin.clear ( ); 
    cin.ignore ( numeric_limits <streamsize> ::max (),'\n' ); 
    } 
    return input ; 


}
int checking2  ( int input )
 { 
    while (!(cin >> input) || input  < 1 || input > 31) { 
    cout << "Enter a valid number: " << endl ; 
    cin.clear ( ); 
    cin.ignore ( numeric_limits <streamsize> ::max (),'\n' ); 
    } 
    return input ; 

}