#include "13.5.h" 
#include <iostream> 

using namespace std ; 
RetailItem :: RetailItem () { 
 description = " " ; 
 unitsOnHand = 0 ; 
 price = 0 ; 

}

RetailItem :: RetailItem (string d , int u , double p ) 
{ 
    description = d ; 
    unitsOnHand = u ; 
    price = p  ; 


}


void RetailItem :: setPrice (double p) 
{ 
price = p ; 
}
void RetailItem :: setDescription(string d) 
{ 
description = d ; 
}
void RetailItem :: setUnits (int h) 
{ 
unitsOnHand = h ; 
}