/* Write a program that uses a structure to store the following data about a customer account:
Name
Address
City, State, and ZIP Telephone Number Account Balance Date of Last Payment
The program should use an array of at least 10 structures. It should let the user enter data into the array, 
change the contents of any element, and display all the data stored in the array. The program should have a 
menu-driven user interface.
Input Validation: When the data for a new account is entered, be sure the user enters data for all the fields.
No negative account balances should be entered. */ 

#include <iostream>
#include <string> 

using namespace std ; 



struct Customer { 
    string name,
    City,
    State ; 
    int zip, 
    telephoneNumber, 
    Address,
    DatePayment;
    double accountBalance ;
    
} ;

const int ten = 10; 

void display (Customer [], int ) ; 
void option (); 
int  checking ( int  ) ; 

int main ()
{ 
    Customer customer[20]; 
    int i = 0  ; 
    int option2; 

    
    option ( ) ;
    cout << "Enter number of choice: " ; 
    option2 = checking (option2) ;
   
    cin.ignore (numeric_limits <streamsize> :: max () , '\n') ; 
        
if (option2 == 1 ) { 
    do {    
        


        cout << "Costumer name:" ; 
        getline (cin,customer[i].name ) ;  
        cin.clear () ;

        cout << "Custumer city: "; 
        getline (cin , customer[i].City) ; 
        cin.clear ();

        cout << "Custumer state: " ; 
        getline (cin , customer[i].State) ; 
         cin.clear() ; 
       
        cout << "Custumer zip code: " ; 
        cin >>  customer[i].zip ; 
         cin.clear() ; 
        
        cout << "Custumer telephone number (optional) : " ; 
        cin >> customer[i].telephoneNumber ; 
        cin.clear() ; 
        
        cout << "Custumer date payement: " ; 
        cin >> customer[i].DatePayment; 
        cin.clear() ; 
        
        cout << "Account Balance : " ; 
        cin >> customer[i].accountBalance ; 
        cin.clear() ; 
       
        
        
        option ( ) ;
        cout << "Enter number of choice: " ; 
         option2 = checking ( option2);
         cin.ignore (numeric_limits <streamsize> :: max () , '\n') ; 
         
         if ( option2 == 2) 
         { 
            display ( customer , i) ; 
         }

        i++ ;
    
    } while ( option2 == 3 ); 

} else if (option2 == 2 ) { 
    display ( customer , i  ) ; 

}



}
void option () { 

cout << "1.New customer "  <<   endl ; 
cout << "2.Display " << endl ; 
cout << "3.Enter a new custumor " << endl ; 
cout << "4.Quit program " << endl;

}

void display ( Customer input [], int i )
{ 
    cout << "Customer name: " << input[i].name << endl ;
    cout << "Customer city: " << input[i].City <<  endl ; 
    cout << "Customer state: " << input[i].State << endl; 
    cout << "Customer zip code: " << input [i].zip << endl ;
    cout << "Customer telephone number: " << input[i].telephoneNumber << endl ; 
    cout << "Customer date payement; " << input [i].DatePayment << endl;  
    cout << "Customer account balance: " << input [i].accountBalance << endl; 
}


int checking (  int   i ) 
{   
    
    while ( !(cin >> i) || i  < 0 || i > 4  )  
    {
        cout << "Enter a valud option: " << endl ;      
        cin.clear ( ) ; 
        cin.ignore (numeric_limits <streamsize> :: max () , '\n') ; 
        
     }

    return i ; 
}