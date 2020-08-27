//Write a program that lets a maker of chips and salsa keep track of sales for five different types of salsa: mild, medium, sweet, hot, and zesty. 
//The program should use two parallel 5-element arrays: an array of strings that holds the five salsa names and an array of integers that holds the
//number of jars sold during the past month for each salsa type. The salsa names should be stored using an initialization list at the time the name array is created.
//The program should prompt the user to enter the number of jars
//sold for each type. Once this sales data has been entered, the program should produce a report that displays sales for each salsa type, total sales,
//and the names of the highest selling and lowest selling products.


#include <iostream> 
using namespace std; 

int check1 (int) ; 


int main () { 
const int size = 5 ; 
string nameOfSalsa [size] = { "Mild" , "Medium", "Sweet" , "Hot", "Zesty"} ; 
int SalsaSold [size]; 
int i = 0 ; 
string highestS , lowestS ; 


for (i = 0 ; i < size ; i++ ) { 

    cout << "Enter the amount sold of " << nameOfSalsa [i] << " salsa:" << endl ; 
    SalsaSold [i] = check1 (SalsaSold[i]) ; 
}

int highest = SalsaSold [0] ; 
int lowest = SalsaSold [0];
for ( i = 1 ; i < size ; i++ ) { 
    if (SalsaSold [i] < highest) { 
        highestS = nameOfSalsa[i] ; 
        highest = SalsaSold [i] ; 

    }
    else if ( SalsaSold[i] > lowest ) { 
        lowestS = nameOfSalsa [i] ; 
        lowest = SalsaSold [i] ; 
    }
}


for ( i = 0 ; i < size ; i++ ) { 
    cout << nameOfSalsa [i] << "salsa sold: " << SalsaSold [i] << endl ;  
}
cout << "Highest sale: " << highestS << " with " << highest << " sold." << endl ;
cout << "Lowest sale: " << lowestS << "with " << lowest << " sold" << endl ;

}
int check1 ( int num) { 
    while ( !(cin >> num) || num < 0 ) { 
        cout << "Enter a valid number! " << endl ; 
        cin.clear () ; 
        cin.ignore (numeric_limits <streamsize> :: max () ) ; 
}
return num ;
}