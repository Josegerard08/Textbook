/*Write a program that uses a structure to store the following weather data for a par- ticular month:
Total Rainfall
High Temperature
 Low Temperature
 Average Temperature
The program should have an array of 12 structures to hold weather data for an entire year. 
When the program runs, it should ask the user to enter data for each month. (The average temperature 
should be calculated.) Once the data are entered for all the months, the program should calculate and 
display the average monthly rainfall, the total rainfall for the year, the highest and lowest temperatures 
for the year (and the months they occurred in), and the average of all the monthly average temperatures.
Input Validation: Only accept temperatures within the range between –100 and +140 degrees Fahrenheit. */ 



// Couldn't get the highest or lowest 

#include <iostream> 
#include <iomanip> 
using namespace std ; 

struct months
{ 
    double total , 
    highT,
    lowT,
    av ;
}; 

double checking (months[], int) ;
double checking2 (months[], int ) ; 
int  lowest ( months[], int ) ; 
int highest ( months [], int) ; 
const int month = 12 ; 
int main (  ) 
{ 
    int  low , high ; 
    months record[month] ;
    months totals ;  
    for ( int i = 0 ; i < month ; i++) 
    { 
        cout << "Enter the number of rainfall in the " << (i+1) << " month: " ;
        record[i].total = checking( record, month); 
        totals.total += record[i].total ; 
        
    }
 for ( int i = 0 ; i < month ; i++) 
    { 
        cout << "Enter the number of the highest tempeture in the " << (i+1) << " month: " ;
        record[i].highT= checking2( record, month); 

    }
 for ( int i = 0 ; i < month ; i++) 
    { 
        cout << "Enter the number of the highest tempeture in the " << (i+1) << " month: " ;
        record[i].lowT= checking2( record, month); 
        
    }
    
    totals.av =  totals.total / month  ;  

    
    low = lowest ( record , month) ;
    high = highest ( record, month ); 



    cout << setprecision(2) << fixed ; 

    cout << "Average rain fall: "  << totals.av << endl; 
    cout << "The lowest tempeture throughtout the year: " << low << endl ; 
    cout << "The highest tempeture throughtout the year: "<<high <<  endl ; 


}
double checking ( months input[] , int month) 
{ 
    while ( !(cin >> input[month].total) || input[month].total < 0 ) 
{ 
    cout << "Enter a valid number: " << endl ; 
    cin.clear (); 
    cin.ignore(numeric_limits <streamsize> :: max(), '\n') ;

}
return input[month].total ; 
}
double checking2 ( months input [], int month ) 
{
    while ( !(cin>>input[month].highT || cin >> input[month].lowT ) || input[month].lowT < -100 || input[month].lowT > 140  || 
    input[month].highT < -100 || input[month].highT> 140 ) 
     { cout << "Enter a temperture between –100 and +140 degrees Fahrenheit." << endl ; 
     cin.clear () ; 
     cin.ignore( numeric_limits <streamsize> :: max() , '\n' ) ; 


    }
return input[month].highT || input[month].lowT; 
}

int highest (months temp [] , int month) 
{
    int max = 0; 
    double high = temp[max].highT ;
    
    for ( int i = 1; i < month ; i++ ) 
    { 
        if ( high < temp[i].highT  )
            max = i;
            high = temp[i].highT; 

    } 
return high;
}
int lowest (months temp [] , int month) 
{
    int min = 0 ; 
    double lowest = temp[min].lowT; 
    for ( int i =1; i < month ; i++ ) 
    {   
        if ( lowest >  temp [i].lowT  ) 
                min = i ;
            lowest = temp[i].lowT ;
            
    }
    return lowest ; 
    
}
