/*Write a function that accepts a pointer to a C-string as an argument and capitalizes the first character of each sentence in the string.
For instance, if the string argument is “hello. my name is Joe. what is your name?” 
the function should manipulate the string so it contains “Hello. My name is Joe. What is your name?” */ 

#include <iostream> 
#include <cstring> 
#include <cctype>

using namespace std; 

void cap ( char* ) ; 


int main () 
{ 
    
    int size = 80 ; 
    char input[size];
    char sr[size] ;  

    cout << "Enter a sentence: " << endl ; 
    cin.getline ( input , size) ; 
    
    cap ( input) ;





}

void cap ( char* input )
{   
    int lenght; 
    lenght = strlen (input) ;
    for ( int i = 0 ; i < lenght; i++ ) 
    {  
        toupper ( input[0]); 

    if ( input[i] == '.' )
        { 
            toupper(input[i+1]); 
            if ( input[i] == '.' && input [i+1]== ' ')
            toupper( input[i+2]); 
        }


    }


for (int i = 0 ; i < lenght ; i++) 
 cout << input [i] ; 




 }