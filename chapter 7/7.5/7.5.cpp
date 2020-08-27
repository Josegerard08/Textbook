
//A local zoo wants to keep track of how many pounds of food each of its three monkeys eats each day during a typical week. 
//Write a program that stores this information in a two-dimensional 3 × 5 array, where each row represents a different monkey 
//and each column represents a different day of the week. The program should first have the user input the data for each monkey.
//Then it should create a report that includes the following information:
//• Average amount of food eaten per day by the whole family of monkeys.
//• The least amount of food eaten during the week by any one monkey.
//• The greatest amount of food eaten during the week by any one monkey.
//Input Validation: Do not accept negative numbers for pounds of food eaten.


#include <iostream> 
using namespace std ; 

int const monkeys = 3;
int const day = 5; 
int checking (int ) ;
void display ( int [][day], int  ); 
int main () { 

int meals [monkeys][day] ; 
int total ;
double average;


for ( int i = 0 ; i < monkeys ; i++ ) { 

        total = 0 ; 
    for ( int a = 0 ; a < day ; a++ ) { 
        cout << "Enter information for monkey " << (i+1) << " in day:" <<(a+1) << endl ; 
        meals[i][a] = checking (meals[i][a]) ; 
        total += meals[i][a] ;
    

    }

}
average = total / day ;

cout << "Average: " << average << endl ; 
display ( meals ,  monkeys );


}

int checking (int num ) { 

    while ( !(cin>> num )|| num < 0) { 
        cout << "Enter a valid number!" << endl ; 
        cin.clear () ; 
        cin.ignore (numeric_limits <streamsize> :: max()) ; 

    }
return num  ; 
}

void display ( int array [][day], int  monkeys) { 
    int lowest = array [0][0] , highest = array [0][0]; 

    for ( int i = 1; i < monkeys; i++ ) { 
          
        for ( int a = 1 ; a < day ; a++ ) { 
                if (array [i][a] > highest) 
                highest = array [i][a] ; 
                else if (array [i][a] < lowest)
                lowest = array [i] [a] ;
        }
        }

        
    
    cout << "The least amount of food eaten during the week by monkey was " << lowest << endl ; 
    cout <<  "The greatest amount of food eaten during the week by monkey was " << highest<< endl;




}
