/*Modify the selectionSort function presented in this chapter so it sorts an array of strings instead of an array of ints.
 Test the function with a driver program. Use Program 8-8 as a skeleton to complete.
*/


#include <iostream>
#include <string> 
using namespace std;

void selectingSort( const string [] , int ) ; 
void display(const string [],int ); 
int main() {
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
    "Griffin, Jim", "Stamey, Marty", "Rose, Geri", "Taylor, Terri", "Johnson, Jill",
    "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean", "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
    "Pike, Gordon", "Holland, Beth" }; 
    
    
    selectingSort (names , NUM_NAMES) ; 

    display ( names, NUM_NAMES); 
    
return 0;
 }



void selectingSort( string array [], int size) 
{ 
    int scan,minIndex; 
    string minValue;
    for ( scan = 0 ; scan < (size-1) ; scan++  ) 
    {
        minIndex = scan ; 
        minValue  = array [scan]; 
    for ( int index = scan +1 ; index < size ; index++) 
    { 
        if ( array [index]  < minValue) { 
            minValue = array[index]; 
            minIndex = index ; 
        }
    }
        array [minIndex ]= array [scan] ; 
        array   [scan ] = minValue ; 
    }


}
 
void display ( string  array [ ], int size) { 



     for ( int i = 0 ; i < size ; i++) { 
        cout << array [i] << endl ;

    }
}