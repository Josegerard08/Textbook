/*Write a program that dynamically allocates an array large enough to hold a userdefined number of test scores.
Once all the scores are entered, the array should be passed to a function that sorts them in ascending order. 
Another function should becalled that calculates the average score. The program should display the sorted list 
of scores and averages with appropriate headings. Use pointer notation rather than array notation whenever possible.
Input Validation: Do not accept negative numbers for test scores. */ 


#include <iostream> 
#include <iomanip> 
using namespace std ; 



int checking ( int ) ; 
int checking2 ( int*  , int ); 
double average ( int*, int ); 
void sorted ( int*, int ); 


int main ( ) { 

    int test ; 
    int* ar ; 
    double averageM; 
    cout << "Enter the number of test: " ; 
    test = checking (test) ; 
    
    ar = new int [test]; 


    for( int i = 0 ; i < test ; i++ ) { 
        cout << "Enter test " << (i+1) << " score : " ; 
        ar[i] =  checking2 ( ar , i ) ;
    }




    
    averageM =  average (ar, test) ; 
    sorted ( ar , test ) ;
    cout << endl; 
    cout << setprecision (2) << fixed ;
    cout << "The average: "<< averageM << endl ; 



}
int checking ( int test)
{ 
    while ( !(cin >> test ) || test < 0 ) { 
        cout <<"Enter a valid number of test." << endl ; 
        cin.clear () ; 
        cin.ignore(numeric_limits <streamsize> :: max(), '\n') ; 
    }
    return test ; 
}

int checking2 ( int *score , int num) { 
    while (!(cin>> score[num]) || score[num] < 0 )  { 
        cout << "Enter a valid test score. " << endl ; 
        cin.clear() ; 
        cin.ignore(numeric_limits <streamsize> :: max() , '\n' ) ;
    }
    return score[num];
}

double average (int* array , int SIZE  ) { 

    double average  ; 
    int total ; 

    for (int i = 0 ; i<SIZE ; i++) 
        total += *(array + i) ;

    average = total/ static_cast <double>(SIZE) ;  

return average ; 


}
void sorted ( int * array , int SIZE) { 

    int startscan , minIndex , minValue ; 
    for ( int startscan = 0 ; startscan < ( SIZE - 1) ; startscan++) 
    { 
        minIndex = startscan ; 
        minValue = *(array + startscan) ; 
        for ( int index = startscan + 1 ; index < SIZE ; index++ ){ 
            if ( array [index] < minValue )
             { 
                 minValue = array[index] ; 
                 minIndex = index; 

            }
        }
    array [minIndex] = array [startscan] ; 
    array [startscan] = minValue; 
    }
    cout << "Array in selection sort: " ; 

for ( int i = 0 ; i < SIZE ; i++ ) 
{ 
    cout << *(array + i) << " "; 


}



}