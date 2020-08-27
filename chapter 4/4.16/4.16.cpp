//Write a program that asks for the names of three runners and 
//the time it took each of them to finish a race.
 //The program should display who came in first, second, and third place.
//Input Validation: Only accept positive numbers for the times.
#include <iostream> 
#include <iomanip> 
using namespace std ; 


int main () { 

 string runner1,  runner2, runner3 ; 
double time1, time2, time3; 

cout << "Enter name: " << endl ; 

getline (cin , runner1) ; 

cout << "Enter time: " << endl ; 
cin >> time1;

cout << "Enter name: " << endl ; 
cin.ignore() ;
getline (cin ,  runner2);  

cout << "Enter time: " << endl ; 
cin >> time2;

cout << "Enter name: " << endl ; 
cin.ignore() ; 
getline (cin,  runner3); 

cout << "Enter time: " << endl ; 
cin >> time3; 

if ( time1 < 0 || time2 < 0 || time3 ) 
    cout << "Restart the program" << endl ;
   

 

  else     { 



      if  (time3  > time1  )
{

    if (time2 > time1) {
    cout << runner1 << " Wins the race" << endl ;
        if ( time3 > time2) {
        cout << runner2 << " Comes second " << endl ;
        cout << runner3 << " Comes last" << endl; 
        }
    
            else { 
            cout << runner3 << " Comes second" << endl ; 
        cout << runner2 << " Comes last" << endl ; 
         
        }
    }
   }

 if  (time1  > time3  ) { 

    if (time2 > time3) {
    cout << runner3 << " Wins the race" << endl ;
     if ( time1 > time2) {
        cout << runner2 << " Comes second " << endl ;
        cout << runner1 << " Comes last" << endl; 
     }
        else 
        { 
            cout << runner1 << " Comes second" << endl ; 
        cout << runner2 << " Comes last" << endl ; 
        } 
    
    }
     

}
if (time1  > time2  ) { 

    if (time3 > time2) {
    cout << runner2 << " Wins the race" << endl ;
      if ( time3 > time1) {
        cout << runner1 << " Comes second " << endl ;
        cout << runner3 << " Comes last" << endl; 
      }
        else
        { 
            cout << runner3 << " Comes second" << endl ; 
        cout << runner1 << " Comes last" << endl ; 
        } 
     
    }
}
 

  }
}