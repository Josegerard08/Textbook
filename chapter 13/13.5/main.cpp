/* Write a class named RetailItem that holds data about an item in a retail store. The
class should have the following member variables:
• description. A string that holds a brief description of the item.
• unitsOnHand. An int that holds the number of units currently in inventory.
• price. A double that holds the item’s retail price.
Write a constructor that accepts arguments for each member variable, appropriate mutator
functions that store values in these member variables, and accessor functions that return the values in these member variables. 
Once you have written the class, write a separate program that creates three RetailItem objects and stores the following data in them. */


#include <iostream> 
#include "13.5.h"
#include "13.cpp" 

using namespace std; 

void display ( RetailItem); 
int main () { 

RetailItem ok ( "hello ", 5 , 53) ; 



display ( ok) ; 

}
void display ( RetailItem oa )
 { 
     cout << "Desciption: " << oa.getDescription() << endl ; 
    cout << "Units on hand: "<< oa.getUnits() << endl ; 
    cout << "price: " << oa.getPrice () << endl ;

}