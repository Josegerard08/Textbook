#include "13.h" 
#include <iostream>
#include <string> 
using namespace std ; 


Employe::Employe(int id , string n , string p , string d ) { 
ID = id ;
name = n ; 
department = d ;
position = p ; 





}


void Employe:: getName ( string n  ) { 
    name = n ; 
}
void Employe:: getPosition ( string p  ) { 
    position= p ; 
}
void Employe:: getDepartment ( string d ) { 
    department = d ; 
}
void Employe:: getID ( int i ) { 
    ID = i ; 
}

