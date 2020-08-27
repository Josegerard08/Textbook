/*Write a function that accepts a pointer to a C-string as an argument and returns the number of words contained in the string.
For instance, if the string argument is “Four score and seven years ago” the function should return the number 6.
Demonstrate the function in a program that asks the user to input a string and then passes it to the function.
The number of words in the string should be displayed on the screen. Optional Exercise: Write an overloaded version of 
this function that accepts a string class object as its argument. */ 

#include <iostream> 
#include <cstring> 

using namespace std ; 

int number (char* ) ;

int main ( ) 
{ 
    int number1; 

    int SIZE = 80 ; 

    char input [SIZE];
    cout << " write something cuhh" << endl ; 
    cin.getline( input , SIZE )  ; 

    number1 = number ( input);
    
    cout << " The number of words you wrote: " << number1 ;



}
int number ( char* input ) 
{   
    int total = 0 ; 
    int length ; 
    length = strlen ( input ) ; 
    for ( int i = 0; i < length ; i++ )
    { 
        if ( input [i] == ' ') 
        { 
            total++ ; 

        }


    } 

return total ;


}