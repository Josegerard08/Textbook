#include "13.h"
#include <iostream> 
#include <string> 

using namespace std ; 

Personal :: Personal (string n , string  ad , int a, int n1 )
{ 
name = n ; 
address = ad ; 
age = a ; 
phoneNumber = n1 ; 
}

void Personal :: getName (string n ) 
{ 
    name = n ; 

}
void Personal :: getAddress ( string a ) 
{ 
    address = a ; 

}
void Personal :: getAge ( int a ) 
{ 
    age = a ;
}
void Personal :: getPhoneNumber (int p)
{ 
    phoneNumber = p ; 

}
