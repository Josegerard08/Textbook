/*Modify the program you wrote for Problem 1 (Charge Account Validation) 
so it performs a binary search to locate valid account numbers. 
Use the selection sort algorithm to sort the array before the binary search is performed.*/ 


#include <iostream> 
using namespace std ; 

void display ( const int [], int , int ); 
int checking (int) ; 
int main () { 
    int input ;
     const int SIZE = 18 ; 
    int numbers [SIZE] = {5658845 ,4520125, 7895122, 8777541 ,8451277 ,1302850 ,8080152 ,4562555, 5552012, 5050552 ,7825877, 1250255 ,1005231, 6545231, 3852085 ,
        7576651 ,8881200, 4581002  } ; 

    cout << "Enter a 7 digit number: " ; 
        input = checking (input) ; 

    display (numbers , SIZE, input ) ; 
return 0  ; 


}
    void display (const int array[] , int size , int input) { 
        
        int position = -1,first = 0, last = size - 1 ,
        middle ;
        
        bool found  = false ; 
     
            while ( !found && first <= last ) 
            {   
                middle = (first + last)/2 ; 
               
                if ( array [middle] == input ) 
                {
                    found = true ; 
                    position = middle ; 
                }
                else if ( array[middle] > input) 
                    last =  middle - 1 ; 
                else 
                    first = middle + 1 ; 

        }
               
            cout << endl ; 
        if (  position == -1 )
            cout << "Your number was not found" << endl; 
        else 
        cout << "Your number:" << input  << " is found " << endl ; 
    }  


int checking (int input) { 

    while ( !(cin>> input) || input > 10000000) { 
        cout << "please type a number." << endl ; 
        cin.clear () ; 
        cin.ignore (numeric_limits <streamsize> :: max() , '\n') ;
    }
return input ; 
}
