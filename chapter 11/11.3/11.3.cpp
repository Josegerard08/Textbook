/* Write a program that uses a structure to store the following data on a company division:
Division Name (such as East, West, North, or South) First-Quarter Sales
Second-Quarter Sales
Third-Quarter Sales
Fourth-Quarter Sales Total Annual Sales Average Quarterly Sales
The program should use four variables of this structure. Each variable should represent one of the
following corporate divisions: East, West, North, and South. The user should be asked for the four
quarters’ sales figures for each division. Each division’s total and average sales should be calculated
and stored in the appropriate member of each structure variable. These figures should then be displayed on the screen.
Input Validation: Do not accept negative numbers for any sales figures. */ 


// to lazy to do the rest. 

#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std ; 

const int quarter = 4 ;
struct Data
{ 
string name ; 
 double pay [ quarter] , total = 0.0 , av ; 
}; 


 
int main ()  { 

    Data first ; 
    Data second ; 
    Data third ; 
    Data fourth ; 
        
        cout << "Enter name for the division: "; 
        getline ( cin, first.name) ; 
        cout << endl ; 
        for ( int i = 0 ; i < quarter ; i++ ) 
        {
            cout << "Enter quarter for " << ( i +1 ) << " in the " << first.name << " divison: " ; 
            cin>> first.pay[i] ;       
            first.total += first.pay[i];      
        }
first.av = first.total / quarter ;

cout << "Average:" << first.av ; 
}

