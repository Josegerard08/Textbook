/* Modify the program of Programming Challenge 2 to allow the user to enter name-score pairs. 
For each student taking a test, the user types the student’s name followed by the student’s integer test score.
Modify the sorting function so it takes an array holding the student names and an array holding the student test scores.
When the sorted list of scores is displayed, each student’s name should be displayed along with his or her score. 
In stepping through the arrays, use pointers rather than array subscripts.
*/



#include <iostream> 
#include <iomanip> 
#include <string> 

using namespace std ; 





int checking ( int ) ; 
int checking2 ( int*  , int ); 
string checking3 ( string*, int ) ; 
double average ( int*, int ); 
void sorted ( int*, int, string* ); 



int main ( ) { 

    int test ; 
    int* ar = nullptr; 
    double averageM; 
     string* ptr = nullptr; 
    string studentNames; 
    cout << "Enter the number of test: " ; 
    test = checking (test) ;


    ptr = new string [test]; 
   
    ar = new int [test]; 

// getting grade 
    for( int i = 0 ; i < test ; i++ )
    { 
        cout << "Enter test " << (i+1) << " score : " ; 
        ar[i] =  checking2 ( ar , i ) ;
        cin.ignore(numeric_limits <streamsize> :: max(), '\n') ;
    }
    // getting names
    for (int i = 0 ; i< test ; i++ )
    {  
        cout << "Enter name for test " << (i + 1) <<" : " << endl ; 
        ptr [i] = checking3 (ptr, test ) ; 

    }
    
    averageM =  average (ar, test) ; 
    
    sorted ( ar , test , ptr ) ;
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
string checking3 ( string *names , int number  ) { 
    while ( !(cin >> names[number])) { 
        cout <<"Enter a name please." << endl; 
        cin.clear(); 
        cin.ignore(numeric_limits <streamsize> :: max(), '\n') ; 
    }
return names[number]; 
}

double average (int* array , int SIZE  ) { 

    double average  ; 
    int total ; 

    for (int i = 0 ; i<SIZE ; i++) 
        total += *(array + i) ;

    average = total/ static_cast <double>(SIZE) ;  

    return average ; 

}

void sorted ( int * array , int SIZE, string * names  ) { 
    
            for ( int i = 0 ; i < SIZE ; i++) { 
                
               cout <<  names [ i] << " " << array[i] << endl ; 



            }

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

for (int i = 0 ; i < SIZE ; i++ ) { 
    cout << *(array+i) << " " ; 



}

}






