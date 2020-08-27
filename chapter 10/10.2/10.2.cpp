/*Write a function that accepts a pointer to a C-string as an argument and displays its contents backward. 
For instance, if the string argument is “Gravity” the function should display “ytivarG”.
Demonstrate the function in a program that asks the user to input a string and then passes it to the func */ 


#include <iostream> 
#include <cstring> 

using namespace std ; 

void backward ( char []); 


int main ()
{ 
    int SIZE = 80 ; 
    char input [SIZE] ; 
    cout << "Enter a string argumet: " ; 
    cin.getline ( input , SIZE ) ; 

    backward ( input) ; 




}
void backward ( char input [ ] ) 
{
    int length ; 
    length = strlen ( input) ; 
    cout << length << endl; 
    for ( int i = length ; 0 < length; i--  ) { 
        cout << input[i] ; 


    }


}

