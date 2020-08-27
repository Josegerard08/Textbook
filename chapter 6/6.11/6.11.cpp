//Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped.
//It should use the following functions:
//• void getScore() should ask the user for a test score, store it in a reference parameter variable, and validate it.
//This function should be called by main once for each of the five scores to be entered.
//• void calcAverage() should calculate and display the average of the four highest scores. This function should be called 
//just once by main and should be passed the five scores.
//• int findLowest() should find and return the lowest of the five scores passed to it. It should be called by calcAverage, 
//which uses the function to determine which of the five scores to drop.
//Input Validation: Do not accept test scores lower than 0 or higher than 100.

#include <iostream> 
#include <iomanip> 
using namespace std ; 


void getScore (int & ) ;
void calcAverage (int & , int & , int & , int &);  
int findLowest (double , double , double , double , double  )  ;
void checking ( int & ) ; 
int main ( ) { 
    int test1 , test2 , test3 , test4 ; 
        cout << setprecision (2) << fixed ; 
    getScore (  test1) ; 
    getScore ( test2 ) ; 
    getScore ( test3 ); 
    getScore ( test4) ;
    calcAverage ( test1, test2 , test3 , test4  ) ; 

      
}
void getScore (int & test)  {
        cout << "Enter test score " << endl ; 
        checking (test) ; 


}
void calcAverage (int & one , int & second , int & three , int & four )
 { 
     double total, add ; 
    add = one + second + three + four  ; 
    total = add / 5 ; 
    cout << "average test score: " << total << endl ;; 
    findLowest ( total, one , second , three , four) ; 


} 
int findLowest ( double total, double one , double two , double three , double four) { 

        if ( total < one && total < two && total < three && total < four ) { 

            cout << "Average score is the lowest" << endl ; 

    }
        else if ( one < total && one < two && one < three && one < four ) { 
            cout << "The fist test is the lowest test grade" << endl ;


        }
 else if ( two < total && two < one && two < three && two < four ) { 
            cout << "The second test is the lowest test grade" << endl ;


        }
         else if ( three < total && three < two && three < one && three < four ) { 
            cout << "The third test is the lowest test grade" << endl ;


        }
         else 
         cout << "The forth test is the lowest test grade" << endl ; 

}
void checking ( int & test )
{
        while ( !(cin >> test)  || test > 100 || test < 0 ){
        cout << "No negative number or no number greater than 100 " << endl ; 
        cout << "Re-Enter number: " << endl ; 
        cin.clear (); 
        cin.ignore ( numeric_limits<streamsize>::max(), '\n');
        }
}

