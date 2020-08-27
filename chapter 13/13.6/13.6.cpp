#include "13.h" 
#include <iostream> 

using namespace std ; 



Inventory :: Inventory (int i , int p, double a  )  
{
    itemNumber = i ; 
    quantity = p  ; 
    cost = a;
}


void Inventory :: setItemNumber(int i)   
{   
    
    
    itemNumber = i ; 

}

void Inventory :: setQuantity ( int i )
{ 
    quantity = i ;
}

void Inventory :: setCost ( double i ) 
{ 
    cost = i ; 
} 