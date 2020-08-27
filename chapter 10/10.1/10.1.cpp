/*Write a function that returns an integer and accepts a pointer to a C-string as an argument. 
The function should count the number of characters in the string and return that number. 
Demonstrate the function in a simple program that asks 
the user to input a string, passes it to the function, and then displays the function’s return value. */ 


#include <iostream> 
#include <cstring> 



using namespace std ; 

int func1  (char* ); 


int main () 
{ 
    int num ; 
    int SIZE = 80 ; 
    char input[SIZE]; 
    cout << "Enter a input: " << endl ; 
    cin.getline ( input , SIZE ) ; 

    cout << "We are going to tell you the number of chararcters you enter" << endl ; 

    num = func1 ( input ); 

    cout << "Number of letters: " << num; 

}
int func1 ( char* input )
 { 
     
    
    int length ; 
    length = strlen ( input ); 
    

return length; 

}