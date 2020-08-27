#include <iostream> 
#include <iomanip> 
using namespace std ; 

//1.5 cups of sugar
//1 cup of butter
//2.75 cups of flour
// The recipe produces 48 cookies with this amount of the ingredients.
// Write a program that asks the user how many cookies he or she wants to make,
// and then displays the number of cups of each ingredient needed for the specified number of cookies.

int main () { 

 double sugar = 1.5 , butter = 1.0 , flour = 2.75 , cookiesT = 48.0; 
double cookies; 
cout << "How many many cookies would you like to make? " << endl ; 
cin >>  cookies; 


//math 
double totalS = (cookies * sugar )/ cookiesT 
, totalB =( butter * cookies) / cookiesT , totalF = (flour * cookies) / cookiesT ;
cout << setprecision (2) << fixed ; 
cout << "You will need the following: " << endl ; 
cout << totalS << " cup of sugars" << endl ; 
cout << totalB << " cup of butters" << endl ; 
cout << totalF << " cup of flours"  << endl ;  






}