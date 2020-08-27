/*Modify the program you wrote for Programming Challenge 2 (Lottery Winners)
so it performs a binary search instead of a linear search
*/ 

#include <iostream> 
using namespace std ;  


int checking (int [], int ) ; 
void display (int [], int [] , int ) ; 

int main( ) { 


    const int SIZE = 10 ; 
    int winner [SIZE] = {13579, 26791, 26792, 33445, 55555 ,62483 ,77777 ,79422, 85647, 93121 } ; 
    int buyer [SIZE] ; 
    
    for (int i = 0 ; i < SIZE ; i++) { 
        cout << "Enter the numbers for week " << (i+1) << " :" << endl ; 
        buyer[i] = checking (buyer , i) ;

    }
display (winner , buyer , SIZE) ; 

}


int checking (int number [], int SIZE) { 
    while ( !(cin >> number[SIZE]) ||  (number[SIZE]  < 0 )|| number [SIZE] > 100000  ) { 
        cout << "Please enter a valid number: "; 
        cin.clear () ; 
        cin.ignore ( numeric_limits <streamsize> :: max () , '\n') ; 
    }
     return number[SIZE] ; 
}


void display (int winner [], int buyer [ ] , int SIZE) { 

    int first = 0 , 
    last = SIZE - 1 ,
     middle ,
    position = -1;
    bool found = false ; 
        while ( !found && first <= last)
         { 
            middle =  ( first + last) / 2 ; 
                if ( buyer[middle] == winner[middle]) 
                { 
                    found = true ; 
                    position = middle; 
                }
                    else if ( winner [middle] > buyer[last ]) 
                    last = middle - 1 ; 
                     else 
                    first = middle + 1 ; 
        }
    
    if ( position == - 1 ) 
        cout << "No lottery ticket winner. " << endl ; 
        else 
        cout << "Winning ticket " << position ; 
    
}