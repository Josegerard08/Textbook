/*Modify the binarySearch function presented in this chapter so it searches an array of strings instead of an array of ints.
Test the function with a driver program. Use Program 8-8 as a skeleton to complete. (The array must be sorted before 
the binary search will work.) */ 


#include <iostream> 
#include <string> 
using namespace std;


string checking (string) ; 
int search (  const string [], string , int ) ;
int main() {
    int result ; 
    string input ;
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim","Griffin, Jim", "Stamey, Marty", "Rose, Geri", "Taylor, Terri", "Johnson, Jill",
    "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean", "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
    "Pike, Gordon", "Holland Beth" }; 
    
    
    cout << "Enter a name: "  ; 
    getline(cin, input) ;     

    result = search ( names , input , NUM_NAMES) ;



    if ( result == -1 ) 
    cout << "Name is not in the list." << endl ; 
    else
    cout << "Name " << names[result] << " found." << endl ;     

return 0;
 }
  

string checking ( string input ) { 
    while ( !(getline(cin, input)))
    { 
        cout << "please enter a name." << endl  ; 
        cin.clear(); 
        cin.ignore (numeric_limits<streamsize>:: max(), '\n') ; 
    }
return input ; 
}

int search (const array [], string input , int size ) { 
    
    int first = 0, 
        last = size - 1 , 
        middle ,        
        position = -1 ; 
    bool found = false ; 
        while ( !found && first <= last ) { 
            middle = first +(first +last ) / 2 ; 
            if ( array [middle] == input) { 
                found = true ; 
                 position = middle;
                 
            }
                else if ( array [middle] > input ){
                last = middle - 1 ; 
                }
                  else
                        first = middle + 1; 
                
        }
 return position ; 
}