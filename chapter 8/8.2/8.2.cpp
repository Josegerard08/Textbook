/*A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 5-digit “lucky” combinations.
Write a program that initializes an array or a vector with these numbers and then lets the player enter this week’s winning 5-digit number.
The program should perform a linear search through the list of the player’s numbers and report whether or not one of the tickets
 is a winner this week. Here are the numbers:
13579 26791 26792 33445 55555 62483 77777 79422 85647 93121 */ 


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

    int index = 0 ;
    int position = -1;
    bool found = false ; 
        while ( index < SIZE && !found) { 
            if ( winner[index] == buyer[index]){
                found = true ; 
                position = index; 
            }
            index++; 
       }
        
        if ( position == -1 ) 
            cout << "No winnig lottery" << endl ; 
                else 
                    cout << "Winning lottery in the week " << (position+1) << endl ; 


}