
/*Write a function that dynamically allocates an array of integers. 
The function should accept an integer argument indicating the number of elements to allocate.
The function should return a pointer to the array. */ 


#include <iostream> 
using namespace std ;  

int* dynamically (  int ) ; 
int checking ( int [], int ); 

int main () { 
    
    const int SIZE = 8 ;
    int *numbers  = nullptr ; 
     int display [SIZE] ; 


    
    numbers = dynamically ( SIZE ) ;  
    cout << "Array: " ;
    for ( int i = 0 ; i < SIZE; i++ ) { 
        cout << numbers[i]<< " " ; 


    }

} 

int *dynamically (  int SIZE ) { 
    int* ar = nullptr ; 

    ar = new int [SIZE]; 
    for ( int i = 0 ; i < SIZE ; i++ ) { 
        cout << "Enter the number a number: " << endl ; 
       ar [i]= checking( ar , i) ;
    }
return ar; 
} 


int checking ( int input [], int i) { 
    while ( !(cin >> input [i]) || input[i] < 0 || input[i] > 10 ){
    cout << "Enter a number between 1-9" << endl  ;
    cin.clear () ; 
    cin.ignore (numeric_limits <streamsize> :: max (), '\n') ; 

}

return input [i] ; 

} 


