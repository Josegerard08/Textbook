//Serendipity Booksellers has a book club that awards points to its customers
//based on the number of books purchased each month.
//The points are awarded as follows:
//• If a customer purchases 0 books, he or she earns 0 points.
//• If a customer purchases 1 book, he or she earns 5 points.
//• If a customer purchases 2 books, he or she earns 15 points.
//• If a customer purchases 3 books, he or she earns 30 points.
//• If a customer purchases 4 or more books, he or she earns 60 points.
//Write a program that asks the user to enter the number of books that he or she has purchased this month 
//and then displays the number of points awarded.

#include <iostream> 
using namespace std ; 


int main ( ) { 

int userInput , books , points ;

cout << "Enter the number of book that you purchase this month: " << endl ;
cin >> userInput ; 

switch (userInput ) { 
    case 0 : 
        cout << "You earn zero points " << endl ;
    case 1 : 
        cout << "You earn 5 points " << endl; 
    case 2 : 
        cout << " You earn 15 points " << endl ;  
    case 3 : 
        cout << "You earn 30 points" << endl ; 
     default : 
     cout << "You earn 60 points" << endl;    







}
// I know I can do If statements but thats just boring






}