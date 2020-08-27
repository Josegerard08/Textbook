//Write a function named coinToss that simulates the tossing of a coin. 
//When you call the function, it should generate a random number in the range of 1 through 2. 
//If the random number is 1, the function should display “heads.” If the random number is 2, 
//the function should display “tails.” Demonstrate the function in a program that asks the user 
//how many times the coin should be tossed and then simulates the tossing of the coin that number of times.

#include <iostream> 
#include <cstdlib> 
using namespace std ; 

void tossed ( int ) ; 
const int head = 1 , tails = 2 ; 

int main () { 

    int userInput , display; 

    cout << "How many time would you want the coin to be tossed?" << endl ; 
    cin >> userInput ; 

    for ( int i = 1 ; i <= userInput; i++) { 

          
        cout << "tossed number: " << i << "| Result: " ;  
        tossed (i) ; 

        }


return 0 ; 
}


void  tossed ( int i) { 
 
    int y = (rand() % ( tails - head + 1) + head) ; 
 
        if  ( y == head ) { 
            cout << "Heads " << endl ; 
            return ;     
        }
        else if ( y == tails ) { 
            cout << "tails" << endl ; 
            return; 
        }

}