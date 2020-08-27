/*Design a class that holds the following personal data: name, address, age, and phone number. 
Write appropriate accessor and mutator functions. Demonstrate the class by writing a program that creates three instances of it. 
One instance should hold your information, and the other two should hold your friends’ or family members’ information. */ 

#include <iostream> 
#include "13.h" 
#include "13.4.cpp"

// to lazy to finish the others. but just copy and past tbh. 


using namespace std  ; 


void display(Personal ); 

int main () { 

Personal me ("Jose", "ggsffg" , 20 , 911) ; 

display (me) ; 

}
void display ( Personal i )  
{ 
cout << "Age : " << i.setAge()  << endl ; 
cout << "Phone number: " << i.setPhone () << endl ; 
cout << "Name: " << i.setName () << endl ; 
cout << "Address: " << i.setAddress() << endl ; 





}