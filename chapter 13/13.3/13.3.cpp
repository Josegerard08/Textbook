#include "13.3.h"
#include <iostream> 
using namespace std ; 


Car::Car ( int y, string m  ) 
{
    yearModel = y ; 
    make = m ;  
    speed = 0 ; 


}



void Car:: accelarate () 
{ 
    speed +=5 ; 
}

void Car :: break1 ()  
{ 
    speed -=5 ; 

}
void Car :: getYear ( int y ) 
{ 
yearModel = y ; 
} 
void Car :: getMake ( string m ) 
{ make = m ; }

void Car:: getSpeed ( int i ) { 
    speed = i ; 
}
