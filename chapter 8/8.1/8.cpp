/*Write a program that lets the user enter a charge account number.
The program should determine if the number is valid by checking for it in the following list:
5658845 4520125 7895122 8777541 8451277 1302850 8080152 
4562555 5552012 5050552 7825877 1250255 1005231 6545231 3852085 
7576651 7881200 4581002
The list of numbers above should be initialized in a single-dimensional array.
A simple linear search should be used to locate the number entered by the user. 
If the user enters a number that is in the array, the program should display a message saying that the number is valid. If the user enters a number that 
is not in the array, the program should display a message indicating that the number is invalid.*/



#include <iostream> 
using namespace std ; 

void display ( const int [], int , int ); 
int checking (int) ; 
int main () { 
    int input ; 
    const int SIZE = 18 ; 
    int numbers [SIZE] = {5658845 ,4520125, 7895122, 8777541 ,8451277 ,1302850 ,8080152 ,4562555, 5552012, 5050552 ,7825877, 1250255 ,1005231, 6545231, 3852085 ,
        7576651 ,7881200, 4581002  } ; 

    cout << "Enter a 7 digit number: " ; 
        input = checking (input) ; 

    display (numbers , SIZE, input ) ; 



}
    void display (const int array[] , int SIZE , int input) { 
        
        int index = 0 ;
        int position = - 1 ; 
        bool found = false ; 
            while ( index < SIZE && !found) {
                if ( array [index ] == input) { 
                    found = true ; 
                    position = index ;
                }
                    index++ ; 
            }

            cout << endl ; 
        if (  position == -1 ) { 
            cout << "Your number was not found" << endl; 
        }
        else 
        cout << "Your number:" << input  << " is found " << endl ; 
    }  


int checking (int input) { 

    while ( !(cin>> input)) { 
        cout << "please type a number." << endl ; 
        cin.clear () ; 
        cin.ignore (numeric_limits <streamsize> :: max() , '\n') ;
    }
return input ; 
}